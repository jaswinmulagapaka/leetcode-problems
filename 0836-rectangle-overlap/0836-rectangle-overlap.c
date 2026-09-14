bool isRectangleOverlap(int* rec1, int rec1Size, int* rec2, int rec2Size) {
    // jaswin is the god of shinobi ;
    
    if (rec1[2] <= rec2[0] || 
        rec1[0] >= rec2[2] || 
        rec1[3] <= rec2[1] || 
        rec1[1] >= rec2[3]) { 
        return false;
    }
    return true;
}