/* <stig/synth/startable_expr.h> 

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

#include <cassert>

#include <base/no_copy_semantics.h>
#include <stig/expr/startable.h>
#include <stig/stig.package.cst.h>
#include <stig/synth/expr.h>

namespace Stig {

  namespace Synth {

    /* TODO */
    class TExprFactory;

    /* TODO */
    class TStartableExpr
        : virtual public TExpr {
      NO_COPY_SEMANTICS(TStartableExpr);
      public:

      /* TODO */
      TStartableExpr() = default;

      virtual ~TStartableExpr() = default;

      /* TODO */
      virtual Expr::TStartable::TPtr GetStartableSymbol() const = 0;

    };  // TStartableExpr

  }  // Synth

}  // Stig
