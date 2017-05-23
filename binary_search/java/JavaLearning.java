// run it with: (add . to CLASSPATH)
//   javac JavaLearning.java
//   java JavaLearning 
public class JavaLearning {
    public static int binary_search(int[] data, int val, int low, int high) {
        int mid = (low + high) / 2;
        int midVal = data[mid];
        if (midVal == val) {
            return mid;
        }
        if (mid == low || mid == high) {
            return -1;
        }
        
        if (midVal > val) {
            return JavaLearning.binary_search(data, val, low, mid);
        } else {
            return JavaLearning.binary_search(data, val, mid, high);
        }
    }
    public static void main(String[] args) {
        int[] data = {1, 3, 7, 8, 9, 19, 21, 49, 56};
        
        int val = 8;
        int i = JavaLearning.binary_search(data, val, 0, data.length - 1);
        System.out.printf("val=%d, i=%d\n", val, i);
        
        val = 18;
        i = JavaLearning.binary_search(data, val, 0, data.length - 1);
        System.out.printf("val=%d, i=%d\n", val, i);        
    }
}
