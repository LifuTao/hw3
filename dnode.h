//dnode.h
class dnode {
public: // TYPEDEF
typedef double value_type;
// CONSTRUCTOR
public:
dnode( const value_type init_data = 0, dnode* init_next = NULL, dnode* init_previous = NULL )
{
 data_field = init_data;
 next = init_next;
 previous = init_previous;}
// Member functions to set the data and link fields:
void set_data(const value_type& new_data)
{
  data_field = new_data;
}
void set_next(dnode* new_next)
{
   next = new_next;
 }
void set_previous(dnode* new_previous)
{
  previous = new_previous;
}
// Const member function to retrieve the current data:
value_type data( ) const
{
   return data_field;
}
// Two slightly different member functions to retrieve each current link:
const dnode* next_link( ) const
{
   return next;
 }
dnode* next_link( )
{
   return next;
 }
const dnode* previous_link() const {
   return previous;
 }
dnode* previous_link() { return previous; }
private:
value_type data_field;
dnode *next;
dnode *previous;


};
