//Emīls E. Magone, em25106

let books = [];

// execute the script when the HTML document has been completely parsed
document.addEventListener("DOMContentLoaded", (event) => {
	
	const form = document.getElementById("book-form");
	const bookList = document.getElementById("book-list");
	const sortSelect = document.getElementById("sort");
	const searchInput = document.getElementById("search");

	let currentGenreFilter = "All";
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// TODO:
	// 1. Validate form fields

	function irkluda(id, zina) {
		document.getElementById(id + "-error").textContent = zina; //piem author-error
	}

	function notiritk() {
		irkluda("cover", "");
		irkluda("title", "");
		irkluda("author", "");
		irkluda("genre", "");
		irkluda("year", "");
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 2. Ievade

	form.addEventListener("submit", (e) => {
	  // TODO: add book
	  e.preventDefault(); //lai viss ievaditais nepazud
	  notiritk();

	  const cover = document.getElementById("cover").value; //saglabajam visu ievadito
		if (cover === ""){
			irkluda("cover", "ievadi cover img url")
			return; //lai nelautu iet visam uz prieksu
		}

		if (cover.endsWith(".jpg") === false && cover.endsWith(".png") === false && cover.endsWith(".gif") === false &&cover.endsWith(".svg") === false) {
			irkluda("cover", "jabeidzas ar .png/jpg/gif/svg")
			return;
		}

 	  const title = document.getElementById("title").value;
		if (title === "") {
			irkluda("title", "ievadi title");
			return;
		}

  	  const author = document.getElementById("author").value;
		if (author === "") {
			irkluda("author", "ievadi author");
			return;
		}

  	  const genre = document.getElementById("genre").value;
		if (genre === "") {
			irkluda("genre", "izvelies genre");
			return;
			}

  	  const year = document.getElementById("year").value;

		if (year === "") {
			irkluda("year", "ievadi year");
			return;
		}

		const tgads = new Date().getFullYear(); //gads kas ir tagad, 2025

		if (year < 1500 || year > tgads) {
  			irkluda("year", "Jabut starp 1500.g. un " + tgads);
			return;
		}

		// 2. Create book object and push to books[]
		const book = {
			cover: cover,
			title: title,
			author: author,
			genre: genre,
			year: year,
			pievienots: new Date() //datums kad pievienoja gramatu
		};

		books.push(book); //pievieno books masivam
		renderBooks(); //lai sis gramatas reali var redzet
		form.reset(); //notiram ievadi


	});

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// 4. Implement filtering by genre

	document.querySelectorAll('input[name="genre-filter"]').forEach(radio => {
	  radio.addEventListener("change", () => {
		// TODO: re-render filtered books with sorting
		currentGenreFilter = radio.value;
    	renderBooks();
	  });
	});

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 5. Implement sorting

	sortSelect.addEventListener("change", () => {
	  // TODO: re-render filtered books with sorting
	  renderBooks();
	});
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 3. Render book list

	function renderBooks() {
	  bookList.innerHTML = "";
	  // TODO: apply filtering, sorting, and render

//filtresana

	const filrets = books.filter(book => currentGenreFilter === "All" || book.genre === currentGenreFilter);

//sorting

	const sorted = sortSelect.value;

		if (sorted === "title-asc") {
			filrets.sort((a, b) => a.title.localeCompare(b.title)); //,localeCompare salidzina burtus
		} else if (sorted === "title-desc") {
			filrets.sort((a, b) => b.title.localeCompare(a.title));
		} else if (sorted === "year-asc") {
			filrets.sort((a, b) => Number(a.year) - Number(b.year)); //jo savadak ir string
		} else if (sorted === "year-desc") {
			filrets.sort((a, b) => Number(b.year) - Number(a.year));
		} else if (sorted === "date-asc") {
			filrets.sort((a, b) => a.pievienots.getTime() - b.pievienots.getTime()); //funkcija kas parvers datumu skaitli
		} else if (sorted === "date-desc") {
			filrets.sort((a, b) => b.pievienots.getTime() - a.pievienots.getTime());
		}

//rendering 

	  for (let i = 0; i < filrets.length; i++) {
		const book = filrets[i];

		const bilde = document.createElement("img");
  		bilde.src = book.cover; //atrod bildi
  		bilde.alt = "nav bildes...";
  		bilde.style.width = "100px"; //lai katra bilde nav sava izmera

		const apraksts = document.createElement("div");
		apraksts.textContent = book.title + " - " + book.author + ". " + book.genre + ", " + book.year + "."
		
		//nonemt kadu gramatu
		const nonemt = document.createElement("button");
		nonemt.textContent = "nonemt";

		nonemt.addEventListener("click", () => {
			for (let i = 0; i < books.length; i++) {
				if (books[i] === book) {
					books.splice(i, 1); //izdzes tiesi to gramatu, vienu pasu
					break;
				} 
			}
			renderBooks(); //refresho 
		});

		bookList.appendChild(nonemt);
		bookList.appendChild(bilde);
		bookList.appendChild(apraksts);
	  }

	} 
});


