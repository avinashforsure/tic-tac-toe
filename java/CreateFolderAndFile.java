import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class CreateFolderAndFile {
    public static void main(String[] args) {
        try {
           
            File folder = new File("D:\\MyFolder");
            if (!folder.exists()) {
                folder.mkdir();
                System.out.println("Folder created successfully.");
            } else {
                System.out.println("Folder already exists.");
            }

           
            File file = new File("D:\\MyFolder\\Avinash.txt");
            if (file.createNewFile()) {
                System.out.println("File created successfully.");
            } else {
                System.out.println("File already exists.");
            }

            
            FileWriter writer = new FileWriter(file);
            writer.write("Hello, my name is Avinash. This file was created using Java.");
            writer.close();

            System.out.println("Data written to the file successfully.");

        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }
    }
}