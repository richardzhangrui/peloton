//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// property_visitor.h
//
// Identification: src/include/optimizer/property_visitor.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#pragma once

namespace peloton {
namespace optimizer {

class PropertyColumns;
class PropertyOutputExpressions;
class PropertySort;
class PropertyPredicate;

//===--------------------------------------------------------------------===//
// Property Visitor
//===--------------------------------------------------------------------===//

// Visit physical properties
class PropertyVisitor {
 public:
  virtual ~PropertyVisitor(){};

  virtual void visit(const PropertyColumns *) = 0;
  virtual void visit(const PropertyOutputExpressions *) = 0;
  virtual void visit(const PropertySort *) = 0;
  virtual void visit(const PropertyPredicate *) = 0;
};

} /* namespace optimizer */
} /* namespace peloton */
