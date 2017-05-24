// run it with: (add . to CLASSPATH)
//   javac JavaLearning.java
//   java JavaLearning 
import java.io.File;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileNotFoundException;
import java.io.IOException;

public class JavaLearning {
    public static void main(String[] args) {
        File inFile = new File("../test.csv");
        
        String inString = "";
        try {
            BufferedReader reader = new BufferedReader(new FileReader(inFile));
            while((inString = reader.readLine())!= null){
                System.out.println(inString);
            }
            reader.close();
        } catch (FileNotFoundException ex) {
            System.out.println("FileNotFoundException: " + ex);
        } catch (IOException ex) {
            System.out.println("IOException: " + ex);
        } 
        
        System.out.println("end.");
    }
}
