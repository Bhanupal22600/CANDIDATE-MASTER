import java.io.*;
import java.util.*;

public class Main {
    static class F {
        byte[] b = new byte[1 << 16];
        int i = 0, s = 0;
        int r() throws IOException {
            if (i == s) { s = System.in.read(b); i = 0; if (s == -1) return -1; }
            return b[i++];
        }
        int n() throws IOException {
            int c, v = 0, sg = 1;
            do { c = r(); } while (c <= 32);
            if (c == '-') { sg = -1; c = r(); }
            while (c > 32) { v = v * 10 + (c - '0'); c = r(); }
            return v * sg;
        }
    }

    public static void main(String[] a) throws Exception {
        F f = new F();
        int n = f.n(), k = f.n();
        ArrayList<Integer>[] g = new ArrayList[n + 1];
        for (int p = 1; p <= n; p++) g[p] = new ArrayList<>();
        int[] d = new int[n + 1], row = new int[n];
        HashSet<Long> h = new HashSet<>();
        for (int t = 0; t < k; t++) {
            for (int j = 0; j < n; j++) row[j] = f.n();
            for (int j = 1; j < n - 1; j++) {
                int u = row[j], v = row[j + 1];
                long c = ((long) u << 32) | v;
                if (h.add(c)) { g[u].add(v); d[v]++; }
            }
        }
        ArrayDeque<Integer> q = new ArrayDeque<>();
        for (int p = 1; p <= n; p++) if (d[p] == 0) q.add(p);
        int cnt = 0;
        while (!q.isEmpty()) {
            int u = q.poll();
            cnt++;
            for (int v : g[u]) if (--d[v] == 0) q.add(v);
        }
        System.out.println(cnt == n ? "Yes" : "No");
    }
}
