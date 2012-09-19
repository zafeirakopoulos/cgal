
namespace CGAL {
namespace Kinetic {

/*!
\ingroup PkgKdsSorting

The class `Kinetic::Sort` maintains a sorted list of objects. It is the 
simplest kinetic data structure provided and is a good place to start 
when looking at the basics of implementing a kinetic data 
structure. 

The `Kinetic::SortVisitor` can be used to monitor what is happening. 

\sa `Kinetic::Ref_counted<T>` 

*/
template< typename Traits, typename Visitor >
class Sort {
public:

/// \name Creation 
/// @{

/*! 
The basic constructor. 
*/ 
Sort(Traits tr); 

/// @} 

/// \name Types 
/// @{

/*! 
The type of the visitor. 
*/ 
typedef Hidden_type Visitor; 

/*! 
The traits type. 
*/ 
typedef Hidden_type Traits; 

/*! 
The handle used to refer to vertex in the sorted list. Derefernecing this returns a `Key` into the `ActiveObjectsTable`. 
*/ 
typedef Hidden_type Vertex_handle; 

/*! 
A reference counted pointer to be used for storing references to the object. 
*/ 
typedef Hidden_type Handle; 

/*! 
A reference counted pointer to be used for storing references to the object. 
*/ 
typedef Hidden_type Const_handle; 

/// @} 

/// \name Operations 
/// @{

/*! 
Access the visitor. 
*/ 
Visitor& visitor(); 

/*! 
Access the traits. 
*/ 
Traits& traits(); 

/*! 
Insert the point. 
*/ 
Vertex_handle insert(Point_key k); 

/*! 
Erase the point. 
*/ 
void erase(Vertex_handle k); 

/*! 
Begin iterating through the ordered `Vertex_handle`s (the iterator is convertible to `Vertex_handle`. 
*/ 
Iterator begin(); 

/*! 
End iterating through the ordered `Vertex_handle`s (the iterator is convertible to `Vertex_handle`. 
*/ 
Iterator end(); 

/// @}

}; /* end Kinetic::Sort */
} /* end namespace Kinetic */
} /* end namespace CGAL */
