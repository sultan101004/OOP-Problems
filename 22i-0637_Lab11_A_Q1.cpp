//#include<iostream>
//using namespace std;
//
//class Material {
//
//	int id;
//	string title;
//	static int count;
//public:
//	Material(int i = 0, string title = "-Nil-") {
//		this->id = i;
//		this->title = title;
//		count++;
//	}
//	
//	int getId() {
//		return id;
//	}
//	string getTitle() {
//		return title;
//	}
//	void setId(int id) {
//		this->id = id;
//	}
//	void setTitle(string title) {
//		this->title = title;
//	}
//
//	
//	Material(Material& m) {
//		this->id = m.id;
//		this->title = m.title;
//		cout << "Copy constructor called" << endl;
//	}
//
//	friend ostream& operator<<(ostream& os, Material& m) {
//		os << "ID: " << m.id << endl;
//		os << "Title: " << m.title << endl;
//		return os;
//	}
//	friend istream& operator>>(istream& is, Material& m) {
//		cout << "Enter ID: ";
//		is >> m.id;
//		cout << "Enter Title: ";
//		is >> m.title;
//		return is;
//	}
//	
//	~Material() {
//	//	count--;
//		cout << "Destructor called" << endl;
//	}
//};
//
//int Material::count = 0;
//
//
//class Book : public Material {
//	string ISBN;
//	string author;
//
//public:
//	Book(string ISBN = "-Nil-", string author = "-Nil-", int isbn = 0, string title = "-Nil-") : Material(isbn, title) {
//		this->ISBN = ISBN;
//		this->author = author;
//	}
//	Book(string ISBN, string author, Material& mt ) : Material(mt) {
//		this->ISBN = ISBN;
//		this->author = author;
//	}
//	
//	Book(Book& b) {
//		this->ISBN = b.ISBN;
//		this->author = b.author;
//		
//		cout << "Copy constructor called" << endl;
//	}
//
//	//operator overloading
//	friend ostream& operator<<(ostream& os, Book& b) {
//		os << "ISBN: " << b.ISBN << endl;
//		os << "Author: " << b.author << endl;
//		os << "ID: " << b.getId() << endl;
//		os << "Title: " << b.getTitle() << endl;
//
//		return os;
//	}
//	friend istream& operator>>(istream& is, Book& b) {
//		
//		int id = 0; 
//		string titlee = "-Nil-";
//		cout << "Enter ISBN: ";
//		is >> b.ISBN;
//		cout << "Enter Author: ";
//		is >> b.author;
//		cout << "Enter ID: ";
//		cin >> id;
//		b.setId(id);
//		cout << "Enter Title: ";
//		is >> titlee;
//		b.setTitle(titlee);
//
//		return is;
//	}
//	Book& operator=(Book& b) {
//		this->ISBN = b.ISBN;
//		this->author = b.author;
//		cout << "Assignment operator called" << endl;
//		this->setId(b.getId());
//		this->setTitle(b.getTitle());
//
//		return *this;
//	}
//
//};
//
//class Magazine : public Material {
//	
//	string pubDate;
//	string editor;
//	string journalName;
//
//public:
//	Magazine(string pubDate , string editor , string journalName , Material &mt ) : Material(mt) {
//		this->pubDate = pubDate;
//		this->editor = editor;
//		this->journalName = journalName;
//	}
//	Magazine(string pubDate = "-Nil-", string editor = "-Nil-", string journalName = "-Nil-" ) : Material() {
//		this->pubDate = pubDate;
//		this->editor = editor;
//		this->journalName = journalName;
//	}
//	Magazine(Magazine & m) {
//
//		this->editor = m.editor;
//		this->journalName = m.journalName;
//		this->pubDate = m.pubDate;
//		this->setId(m.getId());
//		this->setTitle(m.getTitle());
//
//		cout << "Copy constructor called" << endl;
//
//	}
//
//	//operator overlaoding
//	friend ostream& operator<<(ostream& os, Magazine& m) {
//		os << "Publication Date: " << m.pubDate << endl;
//		os << "Editor: " << m.editor << endl;
//		os << "Journal Name: " << m.journalName << endl;
//		return os;
//	}
//
//	friend istream& operator>>(istream& is, Magazine& m) {
//		cout << "Enter Publication Date: ";
//		is >> m.pubDate;
//		cout << "Enter Editor: ";
//		is >> m.editor;
//		cout << "Enter Journal Name: ";
//		is >> m.journalName;
//		int id = 0;
//		string titlee = "-Nil-";
//		cout << "Enter ID: ";
//		is >> id;
//		m.setId(id);
//		cout << "Enter Title: ";
//		is >> titlee;
//		m.setTitle(titlee);
//
//		return is;
//	}
//	Magazine& operator=(Magazine& m) {
//		this->editor = m.editor;
//		this->journalName = m.journalName;
//		this->pubDate = m.pubDate;
//		this->setId(m.getId());
//		this->setTitle(m.getTitle());
//
//		cout << "Assignment operator called" << endl;
//		return *this;
//	}
//	
//
//
//};
//
//class Library {
//	string libraryName;
//	Book* books;
//	Magazine* magazines;
//	int bookCount;
//	int magazineCount;
//public:
//	Library(string libraryName, Book *b, int bc, Magazine * mg, int mc) {
//		this->libraryName = libraryName;
//		books = new Book[bc];
//		for (int i = 0; i < bc; i++) {
//			books[i] = b[i];
//		}
//		magazines = new Magazine[mc];
//		for (int i = 0; i < bc; i++) {
//			magazines[i] = mg[i];
//		}
//		bookCount = bc;
//		magazineCount = mc;
//	}
//
//	Library(Library& l) {
//		this->libraryName = l.libraryName;
//		this->bookCount = l.bookCount;
//		this->magazineCount = l.magazineCount;
//		this->books = new Book[l.bookCount];
//		this->magazines = new Magazine[l.magazineCount];
//		for (int i = 0; i < bookCount; i++) {
//			books[i] = l.books[i];
//		}
//		for (int i = 0; i < magazineCount; i++) {
//			magazines[i] = l.magazines[i];
//		}
//		cout << "Copy constructor called" << endl;
//	}
//
//	//operator overloading
//	friend ostream& operator<<(ostream& os, Library& l) {
//		os << "Library Name: " << l.libraryName << endl;
//		os << "Books: " << endl;
//		for (int i = 0; i < l.bookCount; i++) {
//			cout << l.books[i];
//		}
//		os << "Magazines: " << endl;
//		for (int i = 0; i < l.magazineCount; i++) {
//			cout << l.magazines[i];
//		}
//		return os;
//	}
//	friend istream& operator>>(istream& is, Library& l) {
//		cout << "Enter Library Name: ";
//		is >> l.libraryName;
//		cout << "Enter Book Count: ";
//		is >> l.bookCount;
//		cout << "Enter Magazine Count: ";
//		is >> l.magazineCount;
//		for (int i = 0; i < l.bookCount; i++) {
//			is >> l.books[i];
//		}
//		for (int i = 0; i < l.magazineCount; i++) {
//			is >> l.magazines[i];
//		}
//		return is;
//	}
//	Library& operator=(Library& l) {
//		this->libraryName = l.libraryName;
//		this->bookCount = l.bookCount;
//		this->magazineCount = l.magazineCount;
//		this->books = new Book[l.bookCount];
//		this->magazines = new Magazine[l.magazineCount];
//		for (int i = 0; i < bookCount; i++) {
//			books[i] = l.books[i];
//		}
//		for (int i = 0; i < magazineCount; i++) {
//			magazines[i] = l.magazines[i];
//		}
//		cout << "Assignment operator called" << endl;
//		return *this;
//	}
//	
//
//	~Library() {
//		delete[] books;
//		delete[] magazines;
//		cout << "Destructor called" << endl;
//	}
//};
//int main() {
//
//	/*Book* Book1 = new Book("123456789", "John Doe", 1, "C++ Programming");
//	Magazine* Magazine1 = new Magazine("2023-10-01", "Jane Smith", "Tech Journal", 2, "Latest Tech Trends");
//	Library* library1 = new Library("City Library", Book1, 1, Magazine1, 1);
//	Library* library2 = new Library(*library1);
//	cout << *library1;
//	cout << *library2;
//	Book* Book2 = new Book("987654321", "Alice Johnson", 3, "Data Structures");
//	Magazine* Magazine2 = new Magazine("2023-11-01", "Bob Brown", "Science Journal", 4, "Science Innovations");
//	Library* library3 = new Library("County Library", Book2, 1, Magazine2, 1);
//	*library1 = *library3;
//	cout << *library1;
//	cout << *library3;
//	delete library1;
//	delete library2;
//	delete library3;
//	delete Book1;
//	delete Book2;
//	delete Magazine1;
//	delete Magazine2;
//*/
//	Material M(123, "Material Title");
//	cout << M;
//	Material M2(234, "Material Title 2");
//	cout << M2;
//	Book B("787898", "John Doe",M);
//	cout << B;
//	Magazine M3("2023-10-01", "Jane Smith", "Tech Journal", M2);
//	cout << M3;
//
//	Library L("City Library", &B, 1, &M3, 1);
//	cout << L;
//
//
//	return 0;
//}