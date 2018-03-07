void merge(int src1[], int src2[], int dst[], int n)
{
    int i1 = 0, i2 = 0, id = 0;
    /*
    while (i1 + i2 < 2 * n) {
        int c1 = i1 < n,
            c2 = i2 < n,
            c3 = src1[i1] < src2[i2];
         dst[id++] = (c1 & c2) * (c3 * src1[i1] + (!c3) * src2[i2]) +
             (c1 & (!c2)) * src1[i1] +
             ((!c1) & c2) * src2[i2];
         i1 += c1 & ((c2 & c3) | (!c2));
         i2 += ((c1 & !c3) | (!c1)) & c2;
    }
    */
    /*
    int c;
    while (i1 < n && i2 < n) {
        c = src1[i1] < src2[i2];
        dst[id++] = c * src1[i1] + !c * src2[i2];
        i1 += c, i2 += !c;
    }
    */
    /*
    while (i1 < n && i2 < n) {
        dst[id++] = (src1[i1] < src2[i2]) ? src1[i1++] : src2[i2++];
    }
    while (i1 < n)
        dst[id++] = src1[i1++];
    while (i2 < n)
        dst[id++] = src2[i2++];
    */
}
