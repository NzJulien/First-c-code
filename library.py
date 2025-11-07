




class Book:
    def __init__(self,author,title,genre):
        self.author = author
        self.title = title
        self.genre = genre

class Library:
    def __init__(self):
        self.library = []
    def add_books(self,book):
        if (any(book.title == existing.title for existing in self.library)):
            print("Already Exists!")
        else:
            self.library.append(book)
    def delete_book(self,book):
        title = input("Please enter the title name to delete: ")
        for book in self.library:
            if book.title == title:
                self.library.remove(book)
    
