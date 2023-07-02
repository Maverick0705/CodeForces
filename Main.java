package com.company;

class Parent
{
    int a;
    Parent(int a)
    {
       this.a = a;
    }
}
class base extends Parent
{
    int b ;
    int a ;
    base(int a , int b , int c)
    {
        super(a);
        this.b = b;
        this.a = c;
    }

    public void display()
    {
        System.out.println("Value of Parent : " + super.a);
        System.out.println("Value of child class : " + b + " " + a);
    }
}

public class Main {

    public static void main(String[] args) {
	base obj = new base(10 , 20 , 30);
    obj.display();
    }
}
