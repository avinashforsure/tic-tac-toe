class PC1 {
    int data;
    boolean flag = false;

    synchronized void produce(int x) throws Exception {
        while (flag) wait();
        data = x;
        System.out.println("Produced: " + x);
        flag = true;
        notify();
    }

    synchronized void consume() throws Exception {
        while (!flag) wait();
        System.out.println("Consumed: " + data);
        flag = false;
        notify();
    }
}

public class Q14 {
    public static void main(String[] args) {
        PC1 pc = new PC1();

        new Thread(() -> {
            try {
                for (int i = 0; i < 5; i++)
                    pc.produce(i);
            } catch (Exception e) {}
        }).start();

        new Thread(() -> {
            try {
                for (int i = 0; i < 5; i++)
                    pc.consume();
            } catch (Exception e) {}
        }).start();
    }
}