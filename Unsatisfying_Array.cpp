import java.io.*;
import java.util.*;

public class Main {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
        
        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }
        
        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
        
        int nextInt() { return Integer.parseInt(next()); }
    }
    
    static ArrayList<ArrayList<Integer>> pq(int n, int k, FastReader fr) {
        ArrayList<HashSet<Integer>> g = new ArrayList<>();
        for (int i = 0; i <= n + 1; i++) g.add(new HashSet<>());
        
        ArrayList<ArrayList<Integer>> q = new ArrayList<>();
        for (int i = 0; i < k; i++) {
            int l = fr.nextInt(), r = fr.nextInt(), m = fr.nextInt();
            ArrayList<Integer> tmp = new ArrayList<>();
            tmp.add(m); tmp.add(l); tmp.add(r);
            q.add(tmp);
            for (int j = l; j <= r; j++) g.get(j).add(m);
        }
        Collections.sort(q, (a, b) -> a.get(0) - b.get(0));
        return q;
    }
    
    static ArrayList<Integer> getA(int n, ArrayList<ArrayList<Integer>> q) {
        ArrayList<Integer> a = new ArrayList<>();
        for (int i = 0; i <= n; i++) a.add(1);
        
        for (int i = 0; i < q.size(); i++) {
            int l = q.get(i).get(1), r = q.get(i).get(2), m = q.get(i).get(0);
            int mn = Integer.MAX_VALUE;
            for (int j = l; j <= r; j++) mn = Math.min(mn, a.get(j));
            
            if (mn == m) {
                for (int j = l; j <= r; j++) {
                    if (a.get(j) < n && m == a.get(j)) {
                        a.set(j, a.get(j) + 1);
                    }
                }
            }
        }
        return a;
    }
    
    static void solve(int tc) {
        FastReader fr = new FastReader();
        PrintWriter pw = new PrintWriter(System.out);
        
        int n = fr.nextInt(), k = fr.nextInt();
        ArrayList<ArrayList<Integer>> q = pq(n, k, fr);
        ArrayList<Integer> a = getA(n, q);
        
        for (int i = 0; i < q.size(); i++) {
            int l = q.get(i).get(1), r = q.get(i).get(2), m = q.get(i).get(0);
            int mn = Integer.MAX_VALUE;
            for (int j = l; j <= r; j++) mn = Math.min(mn, a.get(j));
            if (mn == m) {
                pw.println("-1");
                pw.flush();
                return;
            }
        }
        
        for (int i = 1; i <= n; i++) pw.print(a.get(i) + " ");
        pw.println();
        pw.flush();
    }
    
    public static void main(String[] args) {
        FastReader fr = new FastReader();
        int t = fr.nextInt();
        for (int i = 1; i <= t; i++) solve(i);
    }
}