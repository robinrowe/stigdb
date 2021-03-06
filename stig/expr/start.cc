/* <stig/expr/start.cc> 

   Implements <stig/expr/start.h>.

   Copyright 2010-2014 Tagged
   
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
   
     http://www.apache.org/licenses/LICENSE-2.0
   
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */

#include <stig/expr/start.h>

#include <stig/expr/visitor.h>
#include <stig/pos_range.h>

using namespace Stig;
using namespace Stig::Expr;

TStart::TPtr TStart::New(const TExpr::TPtr &expr, const TPosRange &pos_range) {
  return TStart::TPtr(new TStart(expr, pos_range));
}

TStart::TStart(const TExpr::TPtr &expr, const TPosRange &pos_range)
    : TUnary(expr, pos_range) {}

void TStart::Accept(const TVisitor &visitor) const {
  assert(this);
  assert(&visitor);
  visitor(this);
}

Type::TType TStart::GetType() const {
  assert(this);
  return GetExpr()->GetType();
}

