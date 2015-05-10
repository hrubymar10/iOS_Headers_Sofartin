/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLColumn : NSSQLProperty {
    unsigned int _allowAliasing;
    NSString *_columnName;
    unsigned int _fetchIndex;
    unsigned int _precision;
    int _scale;
    unsigned int _slot;
    int _sqlType;
}

- (void)_setColumnName:(id)arg1;
- (void)_setFetchIndex:(unsigned int)arg1;
- (void)_setSQLType:(unsigned int)arg1;
- (void)_setSlotIfDefault:(unsigned int)arg1;
- (bool)allowAliasing;
- (id)cloneForReadOnlyFetching;
- (id)columnName;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)fetchIndex;
- (id)initForReadOnlyFetching;
- (id)initWithColumnName:(id)arg1 sqlType:(unsigned int)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (unsigned int)precision;
- (unsigned int)roughSizeEstimate;
- (int)scale;
- (void)setAllowAliasing:(bool)arg1;
- (void)setPrecision:(unsigned int)arg1;
- (void)setScale:(int)arg1;
- (unsigned int)slot;
- (unsigned int)sqlType;

@end
