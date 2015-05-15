/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFormatObject : NSObject <NSCopying, NSMutableCopying, TSCHCustomFormatSupport, TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject> {
    struct { 
        int mFormatType; 
        union { 
            struct { 
                unsigned int mCurrencyCodeIndex : 16; 
                unsigned int mDecimalPlaces : 8; 
                unsigned int mNegativeStyle : 3; 
                unsigned int mShowThousandsSeparator : 1; 
                unsigned int mUseAccountingStyle : 1; 
            } mNumberFormatStruct; 
            struct { 
                unsigned int mFractionAccuracy : 8; 
            } mFractionFormatStruct; 
            struct { 
                unsigned int mBase : 8; 
                unsigned int mBasePlaces : 8; 
                unsigned int mBaseUseMinusSign : 1; 
            } mBaseFormatStruct; 
            struct { 
                unsigned int mSuppressDateFormat : 1; 
                unsigned int mSuppressTimeFormat : 1; 
                NSString *mDateTimeFormat; 
            } mDateFormatStruct; 
            struct { 
                unsigned int mUseAutomaticUnits : 1; 
                int mDurationUnitSmallest; 
                int mDurationUnitLargest; 
                int mDurationStyle; 
            } mDurationFormatStruct; 
            struct { 
                NSUUID *mCustomFormatKey; 
                TSUCustomFormat *mCustomFormat; 
                unsigned int mLegacyID; 
                unsigned char mAppliedConditionKey; 
            } mCustomFormatStruct; 
            struct { 
                double mMinimum; 
                double mMaximum; 
                double mIncrement; 
                int mDisplayFormatType; 
                unsigned int mOrientation : 2; 
                unsigned int mPosition : 2; 
            } mControlFormatStruct; 
            struct { 
                int mInitialValue; 
                unsigned int mMultipleChoiceListFormatID; 
                <TSUMultipleChoiceListChoiceProviding> *mData; 
            } mMultipleChoiceListFormatStruct; 
        } ; 
    } mFormatStruct;
    bool mUseExpandedContents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { id x_6_2_1; id x_6_2_2; unsigned int x_6_2_3; unsigned char x_6_2_4; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; } formatStruct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useExpandedContents;

+ (id)defaultDateFormat:(id)arg1;
+ (id)defaultDurationFormat;
+ (id)instanceWithArchive:(const struct FormatStructArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[2]; unsigned int x5; unsigned int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; unsigned int x8; unsigned int x9; unsigned int x10; bool x11; bool x12; bool x13; bool x14; unsigned int x15; unsigned int x16; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x17; unsigned int x18; unsigned int x19; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x20; double x21; unsigned int x22; unsigned int x23; double x24; double x25; double x26; unsigned int x27; unsigned int x28; bool x29; bool x30; bool x31; bool x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_38_1_1; int x_38_1_2; int x_38_1_3; int x_38_1_4; } x38; struct IndexSet {} *x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; struct UUID {} *x44; bool x45; int x46; }*)arg1 unarchiver:(id)arg2;

- (id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2;
- (id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
- (id)convertToPersistableStyleObject;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customFormatListKey;
- (id)dataFormatterForDocumentRoot:(id)arg1;
- (void)dealloc;
- (struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { id x_6_2_1; id x_6_2_2; unsigned int x_6_2_3; unsigned char x_6_2_4; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; })formatStruct;
- (int)formatType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct FormatStructArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[2]; unsigned int x5; unsigned int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; unsigned int x8; unsigned int x9; unsigned int x10; bool x11; bool x12; bool x13; bool x14; unsigned int x15; unsigned int x16; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x17; unsigned int x18; unsigned int x19; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x20; double x21; unsigned int x22; unsigned int x23; double x24; double x25; double x26; unsigned int x27; unsigned int x28; bool x29; bool x30; bool x31; bool x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_38_1_1; int x_38_1_2; int x_38_1_3; int x_38_1_4; } x38; struct IndexSet {} *x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; struct UUID {} *x44; bool x45; int x46; }*)arg1 unarchiver:(id)arg2;
- (id)initWithTSUFormatFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { id x_6_2_1; id x_6_2_2; unsigned int x_6_2_3; unsigned char x_6_2_4; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; })arg1;
- (id)initWithTSUFormatFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { id x_6_2_1; id x_6_2_2; unsigned int x_6_2_3; unsigned char x_6_2_4; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; })arg1 useExpandedContents:(bool)arg2;
- (bool)isCompatibleWithDataFormatter:(id)arg1;
- (bool)isCustom;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)numberOfDecimalPlaces;
- (void)p_setFormatStruct:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_2_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_2_1_5; struct { id x_6_2_1; id x_6_2_2; unsigned int x_6_2_3; unsigned char x_6_2_4; } x_2_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_2_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_2_1_8; } x2; })arg1;
- (void)saveToArchive:(struct FormatStructArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[2]; unsigned int x5; unsigned int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; unsigned int x8; unsigned int x9; unsigned int x10; bool x11; bool x12; bool x13; bool x14; unsigned int x15; unsigned int x16; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x17; unsigned int x18; unsigned int x19; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x20; double x21; unsigned int x22; unsigned int x23; double x24; double x25; double x26; unsigned int x27; unsigned int x28; bool x29; bool x30; bool x31; bool x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_38_1_1; int x_38_1_2; int x_38_1_3; int x_38_1_4; } x38; struct IndexSet {} *x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; struct UUID {} *x44; bool x45; int x46; }*)arg1 archiver:(id)arg2;
- (bool)useExpandedContents;

@end
