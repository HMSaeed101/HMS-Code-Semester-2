

// Base Class
class POLYGON
{
    protected:
    int num_vertices;
    float x_coor;
    float y_coor;

    public:
    void set(float x, float y, float nv);
}


// Child Class
class RECTANGLE : public POLYGON
{
    public:
    float area();
}

// Child Class
class TRIANGLE : public POLYGON
{
    public:
    float area();
}
