import java.util.*;

public class test {
  public static void main(String[] args) {
    ArrayList<Integer> arr = new ArrayList<>();

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    for (int i = 0; i < n; i++) {
      arr.add(sc.nextInt());
    }
    System.out.println("Hello World");
    sc.close();
  }
}