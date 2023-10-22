As a student, I want to borrow books, so that I can read them. 

{

Basic Flow {

(User) 1. the student shall search and select books to borrow.  

(User) 2. the student shall take selected books to the checkout counter.

(User) 3. the librarian shall scan library card and books.

(System) 4. When books are scanned, the Library System shall record books lent and due date. 

(System) 5. When books are scanned, the Library System shall update book availability.

}

}


As a student, I want to return books, so that I avoid fines.

{

Basic Flow {

(User) 1. the student shall bring books to return to the library.

(User) 2. the librarian shall scan library card and books.

(System) 3. the Library System shall check books back in and update availability. 

(System) 4. the Library System shall calculate and update any overdue fines. 

}

}


As a librarian, I want to manage book inventory, so that availability is tracked.

{

Basic Flow {

(User) 1. the librarian shall search for a book.

(User) 2. the librarian shall update book availability count. 

(System) 3. the Library System shall update book inventory.

(System) 4. the Library System shall recalculate total availability.

}

}


As a librarian, I want to add books, so that new titles are available.

{

Basic Flow {
  
(User) 1. the librarian shall enter details about a new book.

(User) 2. the librarian shall add inventory count for the book.

(System) 3. the Library System shall create a new book record.

(System) 4. the Library System shall update total book inventory.

}

}


As a administrator, I want to manage memberships, so that access is controlled.

{

Basic Flow {

(User) 1. the administrator shall search for a library member. 

(User) 2. the administrator shall modify membership details as needed.

(System) 3. the Library System shall update membership details.

(System) 4. the Library System shall apply changes to membership status.

}

}


As a student, I want to renew books, so that I can keep them longer.

{

Basic Flow {

(User) 1. the student shall request renewal on books nearing due date.

(User) 2. the librarian shall process the renewal request.

(System) 3. the Library System shall extend due date for the books. 

(System) 4. the Library System shall update renewal count for books.

}

}


As a student, I want to reserve books, so that I can get them later.

{

Basic Flow {

(User) 1. the student shall place a hold request on an unavailable book. 

(System) 2. the Library System shall add student to reservation waitlist.

(System) 3. When book becomes available, the Library System shall notify student.

(User) 4. The student shall check out the reserved book.

}

}

As a administrator, I want to view usage reports, so that I can analyze trends.

{

Basic Flow {

(System) 1. the Library System shall generate monthly reports on book usage.

(System) 2. the reports shall include checkout frequency, popular titles etc.

(User) 3. the administrator shall review reports to understand usage patterns. 

}

}

Supplementary Information Cases:
As a student, I want to borrow books, so that I can read them
{
Alternative Flows {
A. At any time, system fails
1.	the Library System shall alert librarian about system outage
2.	the librarian shall switch to manual checkout and note details
3.	When system recovers, manual checkouts shall be entered
B. When book limit is exceeded
1.	the Library System shall notify that book limit reached
2.	the student shall cancel extra books to borrow
C. When student has outstanding fines
1.	the Library System shall block book checkout
2.	the student shall pay outstanding fines
3.	the librarian shall retry checkout after fines paid
}
}