#ifndef POLYGON_H
#define POLYGON_H

class Polygon {
 private:
   Vertex *_v;
   int _size;
   void resize (void);
 public:
   class Polygon {
    private:
     Vertex *_v;
     int _size;
     void resize (void);
    public:
     Polygon (void);
     Polygon (Polygon&);
     Polygon (Vertex*);
     ~Polygon (void);
     Vertex *v(void);
     int size (void);
     Point point (void);
     Edge edge (void);
     Vertex *cw(void);
     Vertex *ccw (void);
     Vertex *neighbor (int rotation);
     Vertex *advance (int rotation);
     Vertex *setV (Vertex*);
     Vertex *insert (Point&);
     void remove (void);
     Polygon * split (Vertex*);
   }
}

#endif // POLYGON_H
