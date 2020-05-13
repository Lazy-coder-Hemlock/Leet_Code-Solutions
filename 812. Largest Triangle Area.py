lass Solution:
    def largestTriangleArea(self, points: List[List[int]]) -> float:
        l=itertools.combinations(points,3)
        m=0
        for p,q,r in l:
            area=0.5*abs(p[0]*q[1]+q[0]*r[1]+r[0]*p[1]-p[1]*q[0]-q[1]*r[0]-r[1]*p[0])
            m=max(m,area)
        return m
