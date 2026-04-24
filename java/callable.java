

import java.util.*;

public class CollectionDemo
{
    public static void printCollection(Collection<String> collection)
    {
        for (String element : collection)
        {
            System.out.println(element);
        }
    }

    public static void main(String[] args)
    {
        Collection<String> list = new ArrayList<>();
        list.add("Amit");
        list.add("Deepak");
        printCollection(list);

        System.out.println("-----------");

        Collection<String> set = new HashSet<>();
        set.add("Kamal");
        set.add("Rahul");
        printCollection(set);
    }
}