/* <stig/symbol/def.h> 

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

#include <memory>

#include <base/assert_true.h>
#include <base/no_copy_semantics.h>
#include <stig/pos_range.h>

namespace Stig {

  namespace Type {

    class TType;

  }  // Type

  namespace Symbol {

    class TGivenParamDef;
    class TResultDef;

    class TDef {
      NO_COPY_SEMANTICS(TDef);
      public:

      class TVisitor {
        public:

        virtual ~TVisitor() {} // TODO: = default;

        virtual void operator()(const TGivenParamDef *that) const = 0;
        virtual void operator()(const TResultDef *that) const = 0;

        protected:

        TVisitor() {} // TODO: = default;

      };  // TVisitor

      typedef std::shared_ptr<TDef> TPtr;

      virtual ~TDef();

      virtual void Accept(const TVisitor &visitor) const = 0;

      const std::string &GetName() const;

      const TPosRange &GetPosRange() const;

      virtual Type::TType GetType() const = 0;

      protected:

      TDef(const std::string &name, const TPosRange &pos_range);

      private:

      std::string Name;

      const TPosRange PosRange;

    };  // TDef

  }  // Symbol

}  // Stig

