class SuperDemo
{
    public static void main(String Arg[])
    {
        Derived dobj = new Derived();
        dobj.gun();
    }
}
class Base
{
    public int A;
    public Base()
    {
        System.out.println("Inside Base default constructor");
        this.A = 11;

    }
    public Base(int i)
    {
        System.out.println("Inside Base parameterised constructor");
        this.A = i;
    }
    public void fun()
    {
        System.out.println("Inside Base fun");
    }
}

class Derived extends Base
{
    public int X;
    public Derived()
    {
        super(11);                                         //3
        System.out.println("Inside Derived constructor");
        this.X = 51;

    }
    public void gun()
    {
        System.out.println("Inside Derived gun");
        System.out.println("Value of A : "+super.A); //1
        super.fun();                                //2
    }
}    



// 1. Access data of parent from child.
// 2. Call method of parent from child.
// 3. Call constructor of parent from child.