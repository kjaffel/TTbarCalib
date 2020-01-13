// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIafsdIcerndOchdIuserdIkdIkjaffeldICMSSW_10_2_18dIsrcdITTbarCalibdIlibTTbarEventAnalysis_ACLiC_dict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/afs/cern.ch/user/k/kjaffel/CMSSW_10_2_18/src/TTbarCalib/TTbarEventAnalysis.cc"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *LJKinematics_t_Dictionary();
   static void LJKinematics_t_TClassManip(TClass*);
   static void *new_LJKinematics_t(void *p = 0);
   static void *newArray_LJKinematics_t(Long_t size, void *p);
   static void delete_LJKinematics_t(void *p);
   static void deleteArray_LJKinematics_t(void *p);
   static void destruct_LJKinematics_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LJKinematics_t*)
   {
      ::LJKinematics_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::LJKinematics_t));
      static ::ROOT::TGenericClassInfo 
         instance("LJKinematics_t", "TTbarEventAnalysis.h", 21,
                  typeid(::LJKinematics_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &LJKinematics_t_Dictionary, isa_proxy, 4,
                  sizeof(::LJKinematics_t) );
      instance.SetNew(&new_LJKinematics_t);
      instance.SetNewArray(&newArray_LJKinematics_t);
      instance.SetDelete(&delete_LJKinematics_t);
      instance.SetDeleteArray(&deleteArray_LJKinematics_t);
      instance.SetDestructor(&destruct_LJKinematics_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LJKinematics_t*)
   {
      return GenerateInitInstanceLocal((::LJKinematics_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LJKinematics_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *LJKinematics_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::LJKinematics_t*)0x0)->GetClass();
      LJKinematics_t_TClassManip(theClass);
   return theClass;
   }

   static void LJKinematics_t_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","/afs/cern.ch/user/k/kjaffel/CMSSW_10_2_18/src/TTbarCalib/TTbarEventAnalysis.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MyEventInfoBranches_t_Dictionary();
   static void MyEventInfoBranches_t_TClassManip(TClass*);
   static void *new_MyEventInfoBranches_t(void *p = 0);
   static void *newArray_MyEventInfoBranches_t(Long_t size, void *p);
   static void delete_MyEventInfoBranches_t(void *p);
   static void deleteArray_MyEventInfoBranches_t(void *p);
   static void destruct_MyEventInfoBranches_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MyEventInfoBranches_t*)
   {
      ::MyEventInfoBranches_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MyEventInfoBranches_t));
      static ::ROOT::TGenericClassInfo 
         instance("MyEventInfoBranches_t", "TTbarEventAnalysis.h", 30,
                  typeid(::MyEventInfoBranches_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MyEventInfoBranches_t_Dictionary, isa_proxy, 4,
                  sizeof(::MyEventInfoBranches_t) );
      instance.SetNew(&new_MyEventInfoBranches_t);
      instance.SetNewArray(&newArray_MyEventInfoBranches_t);
      instance.SetDelete(&delete_MyEventInfoBranches_t);
      instance.SetDeleteArray(&deleteArray_MyEventInfoBranches_t);
      instance.SetDestructor(&destruct_MyEventInfoBranches_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MyEventInfoBranches_t*)
   {
      return GenerateInitInstanceLocal((::MyEventInfoBranches_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MyEventInfoBranches_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MyEventInfoBranches_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MyEventInfoBranches_t*)0x0)->GetClass();
      MyEventInfoBranches_t_TClassManip(theClass);
   return theClass;
   }

   static void MyEventInfoBranches_t_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","/afs/cern.ch/user/k/kjaffel/CMSSW_10_2_18/src/TTbarCalib/TTbarEventAnalysis.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TTbarEventAnalysis_Dictionary();
   static void TTbarEventAnalysis_TClassManip(TClass*);
   static void *new_TTbarEventAnalysis(void *p = 0);
   static void *newArray_TTbarEventAnalysis(Long_t size, void *p);
   static void delete_TTbarEventAnalysis(void *p);
   static void deleteArray_TTbarEventAnalysis(void *p);
   static void destruct_TTbarEventAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTbarEventAnalysis*)
   {
      ::TTbarEventAnalysis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TTbarEventAnalysis));
      static ::ROOT::TGenericClassInfo 
         instance("TTbarEventAnalysis", "TTbarEventAnalysis.h", 54,
                  typeid(::TTbarEventAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TTbarEventAnalysis_Dictionary, isa_proxy, 4,
                  sizeof(::TTbarEventAnalysis) );
      instance.SetNew(&new_TTbarEventAnalysis);
      instance.SetNewArray(&newArray_TTbarEventAnalysis);
      instance.SetDelete(&delete_TTbarEventAnalysis);
      instance.SetDeleteArray(&deleteArray_TTbarEventAnalysis);
      instance.SetDestructor(&destruct_TTbarEventAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTbarEventAnalysis*)
   {
      return GenerateInitInstanceLocal((::TTbarEventAnalysis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TTbarEventAnalysis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TTbarEventAnalysis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TTbarEventAnalysis*)0x0)->GetClass();
      TTbarEventAnalysis_TClassManip(theClass);
   return theClass;
   }

   static void TTbarEventAnalysis_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","/afs/cern.ch/user/k/kjaffel/CMSSW_10_2_18/src/TTbarCalib/TTbarEventAnalysis.h");
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_LJKinematics_t(void *p) {
      return  p ? new(p) ::LJKinematics_t : new ::LJKinematics_t;
   }
   static void *newArray_LJKinematics_t(Long_t nElements, void *p) {
      return p ? new(p) ::LJKinematics_t[nElements] : new ::LJKinematics_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_LJKinematics_t(void *p) {
      delete ((::LJKinematics_t*)p);
   }
   static void deleteArray_LJKinematics_t(void *p) {
      delete [] ((::LJKinematics_t*)p);
   }
   static void destruct_LJKinematics_t(void *p) {
      typedef ::LJKinematics_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LJKinematics_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_MyEventInfoBranches_t(void *p) {
      return  p ? new(p) ::MyEventInfoBranches_t : new ::MyEventInfoBranches_t;
   }
   static void *newArray_MyEventInfoBranches_t(Long_t nElements, void *p) {
      return p ? new(p) ::MyEventInfoBranches_t[nElements] : new ::MyEventInfoBranches_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_MyEventInfoBranches_t(void *p) {
      delete ((::MyEventInfoBranches_t*)p);
   }
   static void deleteArray_MyEventInfoBranches_t(void *p) {
      delete [] ((::MyEventInfoBranches_t*)p);
   }
   static void destruct_MyEventInfoBranches_t(void *p) {
      typedef ::MyEventInfoBranches_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MyEventInfoBranches_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTbarEventAnalysis(void *p) {
      return  p ? new(p) ::TTbarEventAnalysis : new ::TTbarEventAnalysis;
   }
   static void *newArray_TTbarEventAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::TTbarEventAnalysis[nElements] : new ::TTbarEventAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTbarEventAnalysis(void *p) {
      delete ((::TTbarEventAnalysis*)p);
   }
   static void deleteArray_TTbarEventAnalysis(void *p) {
      delete [] ((::TTbarEventAnalysis*)p);
   }
   static void destruct_TTbarEventAnalysis(void *p) {
      typedef ::TTbarEventAnalysis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TTbarEventAnalysis

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 216,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)0x0)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 216,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEpairlEintcOintgRsPgR_Dictionary();
   static void vectorlEpairlEintcOintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEintcOintgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEintcOintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEintcOintgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEintcOintgRsPgR(void *p);
   static void destruct_vectorlEpairlEintcOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<int,int> >*)
   {
      vector<pair<int,int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<int,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<int,int> >", -2, "vector", 216,
                  typeid(vector<pair<int,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEintcOintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<int,int> >) );
      instance.SetNew(&new_vectorlEpairlEintcOintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEintcOintgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEintcOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEintcOintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEintcOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<int,int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<pair<int,int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEintcOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<int,int> >*)0x0)->GetClass();
      vectorlEpairlEintcOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEintcOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEintcOintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<int,int> > : new vector<pair<int,int> >;
   }
   static void *newArray_vectorlEpairlEintcOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<int,int> >[nElements] : new vector<pair<int,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEintcOintgRsPgR(void *p) {
      delete ((vector<pair<int,int> >*)p);
   }
   static void deleteArray_vectorlEpairlEintcOintgRsPgR(void *p) {
      delete [] ((vector<pair<int,int> >*)p);
   }
   static void destruct_vectorlEpairlEintcOintgRsPgR(void *p) {
      typedef vector<pair<int,int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<int,int> >

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 216,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 216,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = 0);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "vector", 216,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TString>*)0x0)->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete ((vector<TString>*)p);
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] ((vector<TString>*)p);
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace ROOT {
   static TClass *maplEstringcOvectorlEfloatgRsPgR_Dictionary();
   static void maplEstringcOvectorlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEfloatgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEfloatgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEfloatgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEfloatgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<float> >*)
   {
      map<string,vector<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<float> >", -2, "map", 99,
                  typeid(map<string,vector<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<float> >) );
      instance.SetNew(&new_maplEstringcOvectorlEfloatgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEfloatgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEfloatgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,vector<float> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<float> >*)0x0)->GetClass();
      maplEstringcOvectorlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<float> > : new map<string,vector<float> >;
   }
   static void *newArray_maplEstringcOvectorlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<float> >[nElements] : new map<string,vector<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEfloatgRsPgR(void *p) {
      delete ((map<string,vector<float> >*)p);
   }
   static void deleteArray_maplEstringcOvectorlEfloatgRsPgR(void *p) {
      delete [] ((map<string,vector<float> >*)p);
   }
   static void destruct_maplEstringcOvectorlEfloatgRsPgR(void *p) {
      typedef map<string,vector<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<float> >

namespace ROOT {
   static TClass *maplEstringcOpairlEintcOintgRsPgR_Dictionary();
   static void maplEstringcOpairlEintcOintgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOpairlEintcOintgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOpairlEintcOintgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOpairlEintcOintgRsPgR(void *p);
   static void deleteArray_maplEstringcOpairlEintcOintgRsPgR(void *p);
   static void destruct_maplEstringcOpairlEintcOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,pair<int,int> >*)
   {
      map<string,pair<int,int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,pair<int,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,pair<int,int> >", -2, "map", 99,
                  typeid(map<string,pair<int,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOpairlEintcOintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,pair<int,int> >) );
      instance.SetNew(&new_maplEstringcOpairlEintcOintgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOpairlEintcOintgRsPgR);
      instance.SetDelete(&delete_maplEstringcOpairlEintcOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOpairlEintcOintgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOpairlEintcOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,pair<int,int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,pair<int,int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOpairlEintcOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,pair<int,int> >*)0x0)->GetClass();
      maplEstringcOpairlEintcOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOpairlEintcOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOpairlEintcOintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,pair<int,int> > : new map<string,pair<int,int> >;
   }
   static void *newArray_maplEstringcOpairlEintcOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,pair<int,int> >[nElements] : new map<string,pair<int,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOpairlEintcOintgRsPgR(void *p) {
      delete ((map<string,pair<int,int> >*)p);
   }
   static void deleteArray_maplEstringcOpairlEintcOintgRsPgR(void *p) {
      delete [] ((map<string,pair<int,int> >*)p);
   }
   static void destruct_maplEstringcOpairlEintcOintgRsPgR(void *p) {
      typedef map<string,pair<int,int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,pair<int,int> >

namespace ROOT {
   static TClass *maplEstringcOdoublegR_Dictionary();
   static void maplEstringcOdoublegR_TClassManip(TClass*);
   static void *new_maplEstringcOdoublegR(void *p = 0);
   static void *newArray_maplEstringcOdoublegR(Long_t size, void *p);
   static void delete_maplEstringcOdoublegR(void *p);
   static void deleteArray_maplEstringcOdoublegR(void *p);
   static void destruct_maplEstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,double>*)
   {
      map<string,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,double>", -2, "map", 99,
                  typeid(map<string,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,double>) );
      instance.SetNew(&new_maplEstringcOdoublegR);
      instance.SetNewArray(&newArray_maplEstringcOdoublegR);
      instance.SetDelete(&delete_maplEstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOdoublegR);
      instance.SetDestructor(&destruct_maplEstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,double>*)0x0)->GetClass();
      maplEstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,double> : new map<string,double>;
   }
   static void *newArray_maplEstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,double>[nElements] : new map<string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOdoublegR(void *p) {
      delete ((map<string,double>*)p);
   }
   static void deleteArray_maplEstringcOdoublegR(void *p) {
      delete [] ((map<string,double>*)p);
   }
   static void destruct_maplEstringcOdoublegR(void *p) {
      typedef map<string,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,double>

namespace ROOT {
   static TClass *maplETStringcOTH2FmUgR_Dictionary();
   static void maplETStringcOTH2FmUgR_TClassManip(TClass*);
   static void *new_maplETStringcOTH2FmUgR(void *p = 0);
   static void *newArray_maplETStringcOTH2FmUgR(Long_t size, void *p);
   static void delete_maplETStringcOTH2FmUgR(void *p);
   static void deleteArray_maplETStringcOTH2FmUgR(void *p);
   static void destruct_maplETStringcOTH2FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TH2F*>*)
   {
      map<TString,TH2F*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TH2F*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TH2F*>", -2, "map", 99,
                  typeid(map<TString,TH2F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTH2FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TH2F*>) );
      instance.SetNew(&new_maplETStringcOTH2FmUgR);
      instance.SetNewArray(&newArray_maplETStringcOTH2FmUgR);
      instance.SetDelete(&delete_maplETStringcOTH2FmUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTH2FmUgR);
      instance.SetDestructor(&destruct_maplETStringcOTH2FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TH2F*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TH2F*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTH2FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TH2F*>*)0x0)->GetClass();
      maplETStringcOTH2FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTH2FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTH2FmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TH2F*> : new map<TString,TH2F*>;
   }
   static void *newArray_maplETStringcOTH2FmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TH2F*>[nElements] : new map<TString,TH2F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTH2FmUgR(void *p) {
      delete ((map<TString,TH2F*>*)p);
   }
   static void deleteArray_maplETStringcOTH2FmUgR(void *p) {
      delete [] ((map<TString,TH2F*>*)p);
   }
   static void destruct_maplETStringcOTH2FmUgR(void *p) {
      typedef map<TString,TH2F*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TH2F*>

namespace ROOT {
   static TClass *maplETStringcOTH1FmUgR_Dictionary();
   static void maplETStringcOTH1FmUgR_TClassManip(TClass*);
   static void *new_maplETStringcOTH1FmUgR(void *p = 0);
   static void *newArray_maplETStringcOTH1FmUgR(Long_t size, void *p);
   static void delete_maplETStringcOTH1FmUgR(void *p);
   static void deleteArray_maplETStringcOTH1FmUgR(void *p);
   static void destruct_maplETStringcOTH1FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TH1F*>*)
   {
      map<TString,TH1F*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TH1F*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TH1F*>", -2, "map", 99,
                  typeid(map<TString,TH1F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTH1FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TH1F*>) );
      instance.SetNew(&new_maplETStringcOTH1FmUgR);
      instance.SetNewArray(&newArray_maplETStringcOTH1FmUgR);
      instance.SetDelete(&delete_maplETStringcOTH1FmUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTH1FmUgR);
      instance.SetDestructor(&destruct_maplETStringcOTH1FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TH1F*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TH1F*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTH1FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TH1F*>*)0x0)->GetClass();
      maplETStringcOTH1FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTH1FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTH1FmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TH1F*> : new map<TString,TH1F*>;
   }
   static void *newArray_maplETStringcOTH1FmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TH1F*>[nElements] : new map<TString,TH1F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTH1FmUgR(void *p) {
      delete ((map<TString,TH1F*>*)p);
   }
   static void deleteArray_maplETStringcOTH1FmUgR(void *p) {
      delete [] ((map<TString,TH1F*>*)p);
   }
   static void destruct_maplETStringcOTH1FmUgR(void *p) {
      typedef map<TString,TH1F*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TH1F*>

namespace {
  void TriggerDictionaryInitialization_libTTbarEventAnalysis_ACLiC_dict_Impl() {
    static const char* headers[] = {
"TTbarEventAnalysis.cc",
0
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/lcg/root/6.12.07-gnimlf5/include",
"/afs/cern.ch/user/k/kjaffel/CMSSW_10_2_18/src",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/cms/cmssw/CMSSW_10_2_18/src",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/cms/coral/CORAL_2_3_21-gnimlf9/include/LCG",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/mctester/1.25.0a-gnimlf6/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/lcg/root/6.12.07-gnimlf5/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/dd4hep/v01-08x-gnimlf2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/qt/4.8.7-omkpbe2/include/QtDesigner",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/herwigpp/7.1.4-gnimlf4/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/tauolapp/1.1.5-gnimlf5/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/charybdis/1.003-gnimlf3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/sherpa/2.2.8/include/SHERPA-MC",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/qt/4.8.7-omkpbe2/include/QtOpenGL",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/qt/4.8.7-omkpbe2/include/QtGui",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/thepeg/2.1.4-gnimlf2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/pythia8/230-gnimlf5/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/herwig/6.521-gnimlf3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/rivet/2.5.4-gnimlf6/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/qt/4.8.7-omkpbe2/include/Qt3Support",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/lwtnn/2.4-gnimlf4/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/geant4/10.04-gnimlf3/include/Geant4",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/classlib/3.1.3-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/lhapdf/6.2.1-gnimlf3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/cgal/4.2-gnimlf2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/tkonlinesw/4.2.0-1_gcc7-gnimlf6/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/starlight/r193-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/qt/4.8.7-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/qt/4.8.7-omkpbe2/include/Qt",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/qt/4.8.7-omkpbe2/include/QtCore",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/qt/4.8.7-omkpbe2/include/QtXml",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/mcdb/1.0.3-omkpbe2/interface",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/libungif/4.1.4-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/libtiff/4.0.3-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/libpng/1.6.16-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/frontier_client/2.8.20-omkpbe4/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/pcre/8.37-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/boost/1.63.0-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/xrootd/4.8.3-gnimlf/include/xrootd/private",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/cms/vdt/0.4.0-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/valgrind/3.13.0-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/utm/utm_0.7.1-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/toprex/4.23-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/tbb/2018_U1-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/tauola/27.121.5-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/sigcpp/2.6.2-omkpbe2/include/sigc++-2.0",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/sqlite/3.22.0-omkpbe/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/protobuf/3.5.2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/pacparser/1.3.5-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/oracle/12.1.0.2.0/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/meschach/1.2.pCMS1-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/libuuid/2.22.2-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/libhepml/0.2.1-omkpbe2/interface",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/ktjet/1.06-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/jimmy/4.2-gnimlf3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/jemalloc/5.1.0/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/madgraph5amcatnlo/2.6.0-gnimlf9",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/heppdt/3.03.00-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/hector/1.3.4_patch1-gnimlf6/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/gsl/2.2.1-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/libjpeg-turbo/1.3.1-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/giflib/4.2.3-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/vecgeom/v00.05.00-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/gdbm/1.10-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/freetype/2.5.3-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/fftw3/3.3.2-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/fftjet/1.5.0-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/fastjet/3.3.0-omkpbe/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/expat/2.1.0-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/dpm/1.8.0.1-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/hepmc/2.06.07-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/xerces-c/3.1.3-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/xz/5.2.2-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/dcap/2.47.8-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/libxml2/2.9.1-omkpbe2/include/libxml2",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/curl/7.59.0/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/cppunit/1.12.1-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/clhep/2.4.0.0-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/openssl/1.0.2d-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/pythia6/426-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/photos/215.5-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/zlib-x86_64/1.2.11-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/cascade/2.2.04-gnimlf3/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/bz2lib/1.0.6-omkpbe2/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/python/2.7.14-omkpbe4/include/python2.7",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/tinyxml2/6.2.0/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/ittnotify/16.06.18-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/gosamcontrib/2.0-20150803-omkpbe2/include",
"/usr/local/include",
"/usr/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/lcg/root/6.12.07-gnimlf5/etc",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/lcg/root/6.12.07-gnimlf5/etc/cling",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/lcg/root/6.12.07-gnimlf5/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/external/python/2.7.14-omkpbe4/include",
"/build/cmsbld/auto-builds/CMSSW_10_2_1-slc7_amd64_gcc700/build/CMSSW_10_2_1-build/slc7_amd64_gcc700/external/zlib-x86_64/1.2.11-omkpbe2/include",
"/build/cmsbld/auto-builds/CMSSW_10_2_1-slc7_amd64_gcc700/build/CMSSW_10_2_1-build/slc7_amd64_gcc700/external/openssl/1.0.2d-omkpbe2/include",
"/build/cmsbld/auto-builds/CMSSW_10_2_1-slc7_amd64_gcc700/build/CMSSW_10_2_1-build/slc7_amd64_gcc700/external/tbb/2018_U1-omkpbe2/include",
"/build/cmsbld/auto-builds/CMSSW_10_2_1-slc7_amd64_gcc700/build/CMSSW_10_2_1-build/slc7_amd64_gcc700/external/python/2.7.14-omkpbe4/include/python2.7",
"/build/cmsbld/auto-builds/CMSSW_10_2_1-slc7_amd64_gcc700/build/CMSSW_10_2_1-build/slc7_amd64_gcc700/external/gsl/2.2.1-omkpbe2/include",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/tmp/BUILDROOT/b8740d1adedbebb1a30cba4bc184e89f/opt/cmssw/slc7_amd64_gcc700/cms/cmssw/CMSSW_10_2_18/src",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/slc7_amd64_gcc700/lcg/root/6.12.07-gnimlf5/include",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/slc7_amd64_gcc700/external/pcre/8.37-omkpbe2/include",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/slc7_amd64_gcc700/external/boost/1.63.0-gnimlf/include",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/slc7_amd64_gcc700/external/bz2lib/1.0.6-omkpbe2/include",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/slc7_amd64_gcc700/external/xz/5.2.2-omkpbe2/include",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/slc7_amd64_gcc700/external/zlib-x86_64/1.2.11-omkpbe2/include",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/tmp/BUILDROOT/b8740d1adedbebb1a30cba4bc184e89f/opt/cmssw/slc7_amd64_gcc700/cms/cmssw/CMSSW_10_2_18/",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/slc7_amd64_gcc700/external/libuuid/2.22.2-omkpbe2/include",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/slc7_amd64_gcc700/external/tbb/2018_U1-omkpbe2/include",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/slc7_amd64_gcc700/external/md5/1.0.0-omkpbe2/include",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/slc7_amd64_gcc700/external/tinyxml/2.5.3-gnimlf/include",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/slc7_amd64_gcc700/external/hepmc/2.06.07-omkpbe2/include",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/slc7_amd64_gcc700/external/gsl/2.2.1-omkpbe2/include",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/slc7_amd64_gcc700/external/clhep/2.4.0.0-gnimlf/include",
"/data/cmsbld/jenkins/workspace/auto-builds/CMSSW_10_2_18-slc7_amd64_gcc700/build/CMSSW_10_2_18-build/slc7_amd64_gcc700/cms/vdt/0.4.0-gnimlf/include",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc700/lcg/root/6.12.07-gnimlf5/include",
"/afs/cern.ch/user/k/kjaffel/CMSSW_10_2_18/src/TTbarCalib/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libTTbarEventAnalysis_ACLiC_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
struct __attribute__((annotate(R"ATTRDUMP(file_name@@@/afs/cern.ch/user/k/kjaffel/CMSSW_10_2_18/src/TTbarCalib/TTbarEventAnalysis.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTbarEventAnalysis.h")))  __attribute__((annotate("$clingAutoload$TTbarEventAnalysis.cc")))  LJKinematics_t;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@/afs/cern.ch/user/k/kjaffel/CMSSW_10_2_18/src/TTbarCalib/TTbarEventAnalysis.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTbarEventAnalysis.h")))  __attribute__((annotate("$clingAutoload$TTbarEventAnalysis.cc")))  MyEventInfoBranches_t;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@/afs/cern.ch/user/k/kjaffel/CMSSW_10_2_18/src/TTbarCalib/TTbarEventAnalysis.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TTbarEventAnalysis.h")))  __attribute__((annotate("$clingAutoload$TTbarEventAnalysis.cc")))  TTbarEventAnalysis;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libTTbarEventAnalysis_ACLiC_dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef __ACLIC__
  #define __ACLIC__ 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TTbarEventAnalysis.cc"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"", payloadCode, "@",
"LJKinematics_t", payloadCode, "@",
"MyEventInfoBranches_t", payloadCode, "@",
"TTbarEventAnalysis", payloadCode, "@",
"sortLJKinematicsByDR", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libTTbarEventAnalysis_ACLiC_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libTTbarEventAnalysis_ACLiC_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libTTbarEventAnalysis_ACLiC_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libTTbarEventAnalysis_ACLiC_dict() {
  TriggerDictionaryInitialization_libTTbarEventAnalysis_ACLiC_dict_Impl();
}
