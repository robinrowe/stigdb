/* <stig/expr/obj.h> 

   TODO

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

#pragma once

#include <map>
#include <memory>

#include <base/assert_true.h>
#include <base/no_copy_semantics.h>
#include <stig/expr/ctor.h>
#include <stig/expr/visitor.h>
#include <stig/pos_range.h>

namespace Stig {

  namespace Expr {

    class TObj
        : public TCtor<std::map<std::string, TExpr::TPtr>> {
      NO_COPY_SEMANTICS(TObj);
      public:

      typedef std::shared_ptr<TObj> TPtr;

      typedef std::map<std::string, TExpr::TPtr> TMemberMap;

      static TPtr New(const TMemberMap &members, const TPosRange &pos_range);

      virtual void Accept(const TVisitor &visitor) const;

      inline const TMemberMap &GetMembers() const {
        assert(this);
        return GetContainer();
      }

      virtual Type::TType GetType() const;

      private:

      TObj(const TMemberMap &members, const TPosRange &pos_range);

    };  // TObj

  }  // Expr

}  // Stig

