// Problem Link : https://www.hackerrank.com/challenges/30-abstract-classes/problem


class MyBook extends Book   {
    int p;
    MyBook(String title, String author, int price)  {
        super(title, author);
        this.p = price;
    }
    void display()  {
        System.out.println("Title: "+title);
        System.out.println("Author: "+author);
        System.out.println("Price: "+p);
    }
}
