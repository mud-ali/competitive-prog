import java.util.Scanner;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.nio.CharBuffer;

public class Main {
    public static void main(String[] args) throws IOException {
        FileReader fl = new FileReader("o.in");
        CharBuffer input = CharBuffer.allocate(1024);
        
        fl.read(input);

        fl.close();
    }
}