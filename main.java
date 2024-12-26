import java.io.*;
import java.util.*;

public class Main {
    static class Pair {
        int a, b, c;
        Pair(int a, int b, int c) {
            this.a = a;
            this.b = b;
            this.c = c;
        }
    }
    
    static class compare1 implements Comparator<Pair> {
        public int compare(Pair p1, Pair p2) {
            return p1.a - p2.a;
        }
    }
    
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
        
        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }
        
        String next() {
            try {
                while (st == null || !st.hasMoreElements()) {
                    st = new StringTokenizer(br.readLine());
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
            return st.nextToken();
        }
        
        int nextInt() { return Integer.parseInt(next()); }
        
        void close() {
            try {
                br.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
    
    static ArrayList<Pair> pq(int n, int k, FastReader fr) 
    {
        ArrayList<ArrayList<Integer>> g = new ArrayList<>();
        for (int i = 0; i <= n + 1; i++) g.add(new ArrayList<>());
        
        ArrayList<Pair> q = new ArrayList<>();
        for (int i = 0; i < k; i++) {
            int l = fr.nextInt(), r = fr.nextInt(), m = fr.nextInt();
            q.add(new Pair(m, l, r));
            for (int j = l; j <= r; j++) g.get(j).add(m);
        }
        Collections.sort(q, new compare1());
        return q;
    }
    
    static ArrayList<Integer> getA(int n, ArrayList<Pair> q) {
        ArrayList<Integer> a = new ArrayList<>();
        for (int i = 0; i <= n; i++) a.add(1);
        
        for (int i = 0; i < q.size(); i++) 
        {
            int l = q.get(i).b, r = q.get(i).c, m = q.get(i).a;
            int mn = a.get(l);
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
    
    static void solve(FastReader fr) {
        int n = fr.nextInt(), k = fr.nextInt();
        ArrayList<Pair> q = pq(n, k, fr);
        ArrayList<Integer> a = getA(n, q);
        
        for (int i = 0; i < q.size(); i++) {
            int l = q.get(i).b, r = q.get(i).c, m = q.get(i).a;
            int mn = Integer.MAX_VALUE;
            for (int j = l; j <= r; j++) mn = Math.min(mn, a.get(j));
            if (mn == m) {
                System.out.println("-1");
                return;
            }
        }
        
        StringBuilder sb = new StringBuilder();
        for (int i = 1; i <= n; i++) sb.append(a.get(i)+" ");
        System.out.println(sb);
    }
    
    public static void main(String[] args) {
        FastReader fr = new FastReader();
        int t = fr.nextInt();
        while (t-- > 0) solve(fr);
        fr.close();
    }
}