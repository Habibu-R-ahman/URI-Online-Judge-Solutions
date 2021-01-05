/**
 * **********************
 * *   Easy Solution    *
 * **********************
 * import java.util.Scanner;
 *
 *   public class Main {
 *       public static void main(String[] args) {
 *           try (Scanner input = new Scanner(System.in)) {
 *               double arr[] = {4.00, 4.50, 5.00, 2.00, 1.50};
 *               int X = input.nextInt();
 *               int Y = input.nextInt();
 *               System.out.printf("Total: R$ %.2f\n", arr[X-1] * Y);
 *           }
 *       }
 *   }
 */

 
/**
 * ******************
 * *   Fast Method  *
 * ******************
 */

import java.io.DataInputStream;
import java.io.IOException;
import java.io.PrintWriter;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class URI_1038 {
    static class Reader {
        final private int BUFFER_SIZE = 1 << 16; 
        private final DataInputStream din; 
        private final byte[] buffer; 
        private int bufferPointer, bytesRead;

        public Reader() {
            din = new DataInputStream(System.in); 
            buffer = new byte[BUFFER_SIZE]; 
            bufferPointer = bytesRead = 0; 
        }
  
        public String readLine() throws IOException { 
            final byte[] buf = new byte[64]; // line length 
            int cnt = 0, c; 
            while ((c = read()) != -1) 
            { 
                if (c == '\n') 
                    break; 
                buf[cnt++] = (byte) c; 
            } 
            return new String(buf, 0, cnt); 
        } 
  
        public int nextInt() throws IOException { 
            int ret = 0; 
            byte c = read(); 
            while (c <= ' ') 
                c = read(); 
            final boolean neg = (c == '-'); 
            if (neg) 
                c = read(); 
            do { 
                ret = ret * 10 + c - '0'; 
            }  while ((c = read()) >= '0' && c <= '9'); 
  
            if (neg) 
                return -ret; 
            return ret; 
        }

        private void fillBuffer() throws IOException { 
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE); 
            if (bytesRead == -1) 
                buffer[0] = -1; 
        } 

        private byte read() throws IOException { 
            if (bufferPointer == bytesRead) {
                fillBuffer();
            } 
            return buffer[bufferPointer++]; 
        } 
  
        public void close() throws IOException { 
            if (din == null) 
                return; 
            din.close(); 
        }
    }
    public static void main(String[] args) throws IOException {
        Reader in = new Reader();
        PrintWriter out = new PrintWriter(System.out);
        double arr[] = {0, 4.00, 4.50, 5.00, 2.00, 1.50};

        int X = in.nextInt();
        int Y = in.nextInt();
        in.close();

        out.format("Total: R$ %.2f\n", arr[X] * Y);
        out.close();
    }
}