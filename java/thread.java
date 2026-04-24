class Mythr extends Thread 
{ 
    public Mythr(String name) 
    { 
        super(name); 
    }
    public void run() 
    { 
        System.out.println("Mythr thread is running..."); 
    }
}
class thread 
{ 
    public static void main(String[] args) 
    { 
        Mythr t1 = new Mythr("MythrThread"); 
        Mythr t2 = new Mythr("MythrThread2");
        t1.start();
        t2.start();
        System.out.println("the id of thread is : " + t1.getId()); 
        System.out.println("the name of thread is : " + t1.getName());
        System.out.println("the id of thread is : " + t2.getId()); 
        System.out.println("the name of thread is : " + t2.getName());
    } 
}
