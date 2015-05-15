/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPredicate : NSObject <NSCopying, NSSecureCoding> {
    struct _predicateFlags { 
        unsigned int _evaluationBlocked : 1; 
        unsigned int _reservedPredicateFlags : 31; 
    } _predicateFlags;
    unsigned int reserved;
}

@property (readonly, copy) NSString *predicateFormat;

+ (void)initialize;
+ (id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2;
+ (id)predicateForAssetsInAssetCollectionWithID:(id)arg1;
+ (id)predicateForCloudInvitationsInAssetCollection:(id)arg1;
+ (id)predicateForCommentsInAsset:(id)arg1;
+ (id)predicateForLikesInAsset:(id)arg1;
+ (id)predicateFromMLCorePredicate:(struct shared_ptr<mlcore::Predicate> { struct Predicate {} *x1; struct __shared_weak_count {} *x2; })arg1;
+ (id)predicateWithBlock:(id)arg1;
+ (id)predicateWithCKDPQueryFilters:(id)arg1 translator:(id)arg2;
+ (id)predicateWithFormat:(id)arg1;
+ (id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (id)predicateWithFormat:(id)arg1 arguments:(char *)arg2;
+ (id)predicateWithSortedCKDPQueryFilters:(id)arg1 translator:(id)arg2;
+ (id)predicateWithValue:(bool)arg1;
+ (struct __CFLocale { }*)retainedLocale;
+ (bool)supportsSecureCoding;

- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate {} *x1; struct __shared_weak_count {} *x2; })MLCorePredicateWithEntityClass:(struct EntityClass { int (**x1)(); struct mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_2_1_1; } x2; struct unordered_map<std::__1::basic_string<char>, mlcore::ModelProperty *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelProperty *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, std::__1::hash<std::__1::basic_string<char> >, true> > { unsigned long long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { float x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; struct unordered_map<mlcore::ModelProperty *, mlcore::EntityClass *, std::__1::hash<mlcore::ModelProperty *>, std::__1::equal_to<mlcore::ModelProperty *>, std::__1::allocator<std::__1::pair<mlcore::ModelProperty *const, mlcore::EntityClass *> > > { struct __hash_table<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, std::__1::__unordered_map_hasher<mlcore::ModelProperty *, std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, std::__1::hash<mlcore::ModelProperty *>, true>, std::__1::__unordered_map_equal<mlcore::ModelProperty *, std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, std::__1::equal_to<mlcore::ModelProperty *>, true>, std::__1::allocator<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<mlcore::ModelProperty *, std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, std::__1::hash<mlcore::ModelProperty *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<mlcore::ModelProperty *, std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, std::__1::equal_to<mlcore::ModelProperty *>, true> > { float x_4_3_1; } x_1_2_4; } x_4_1_1; } x4; }*)arg1;
- (bool)_allowsEvaluation;
- (void)_validateForMetadataQueryScopes:(id)arg1;
- (void)ab_addCallbackContextToArray:(struct __CFArray { }*)arg1;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (bool)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 addressBook:(void*)arg2 propertyIndices:(const struct __CFDictionary {}**)arg3;
- (void)ab_runPredicateWithSortOrder:(unsigned int)arg1 inAddressBook:(void*)arg2 withDelegate:(id)arg3;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (id)br_watchedURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)generateMetadataDescription;
- (id)hk_filterRepresentationForDataTypes:(id)arg1 filterClasses:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)minimalFormInContext:(id)arg1;
- (id)normalizedPredicateWithError:(id*)arg1;
- (id)predicateFormat;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (void)validate;

@end
