/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEError : NSObject <NSCopying> {
    NSDictionary *mErrorDictionary;
}

+ (id)attachmentError;
+ (id)autoNumberAttachmentError;
+ (id)badReferenceError;
+ (id)circularReferenceError;
+ (id)durationNotAllowedError:(id)arg1 argumentNumber:(int)arg2;
+ (id)errorForToken:(id)arg1;
+ (id)errorWithDictionary:(id)arg1;
+ (bool)exceptionIsCircularReferenceError:(id)arg1;
+ (bool)exceptionIsFromCalcEngine:(id)arg1;
+ (bool)exceptionIsInvalidMergeReference:(id)arg1;
+ (bool)exceptionIsRangeUsageError:(id)arg1;
+ (id)indirectErrorForRangeReference:(struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1 hostTableID:(struct __CFUUID { }*)arg2 calculationEngine:(id)arg3;
+ (id)invalidMergeReference:(struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1 contextEntityID:(struct __CFUUID { }*)arg2;
+ (bool)p_DictionaryRepresentsInvalidMergeReference:(id)arg1;
+ (void)p_RaiseErrorForDictionary:(id)arg1;
+ (void)raiseAbortError;
+ (void)raiseArgumentEqualsToZeroErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseArgumentSetUsedOutOfContextError;
+ (void)raiseArrayElementNoDataError;
+ (void)raiseAttachmentErrorInTextCell:(bool)arg1;
+ (void)raiseAutoNumberAttachmentErrorInTextCell:(bool)arg1;
+ (void)raiseCategoryCellReferenceError;
+ (void)raiseCharInputOutOfBoundsError;
+ (void)raiseCircularReferenceErrorWithReference:(id)arg1;
+ (void)raiseComparisonTypeExceptionForLeftType:(int)arg1 rightType:(int)arg2;
+ (void)raiseConvertOriginUnitMismatchError;
+ (void)raiseCurrencyNotAllowedErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseDataInvalidDimensionsError;
+ (void)raiseDataInvalidLengthError;
+ (void)raiseDataInvalidWidthError;
+ (void)raiseDateEarlierThanStartingDateErrorForFunctionName:(id)arg1;
+ (void)raiseDifferentDimensionsErrorForFunctionName:(id)arg1;
+ (void)raiseDifferentNumberOfDataPointsErrorForFunctionName:(id)arg1;
+ (void)raiseDifferentNumberOfElementsErrorForFunctionName:(id)arg1;
+ (void)raiseDivideByZeroError;
+ (void)raiseDurationDisallowedForNormdistPDFError;
+ (void)raiseDurationNotAllowedError:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseEmptyArgumentError;
+ (void)raiseEmptyArgumentSpecificErrorForArgumentNumber:(int)arg1;
+ (void)raiseEmptyArrayError;
+ (void)raiseErrorForInvalidReference;
+ (void)raiseErrorForInvalidReference:(struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1 orString:(id)arg2 contextEntityID:(struct __CFUUID { }*)arg3;
+ (void)raiseErrorForInvalidReference:(struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1 orString:(id)arg2 contextEntityID:(struct __CFUUID { }*)arg3 invalidMergeReference:(bool)arg4 disqualifiedFromEndCell:(bool)arg5;
+ (void)raiseIndirectErrorForRangeReference:(struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1 hostTableID:(struct __CFUUID { }*)arg2 calculationEngine:(id)arg3;
+ (void)raiseInvalidAltitudeError;
+ (void)raiseInvalidArgumentEqualityRelationshipErrorForFunctionName:(id)arg1 argIndex1:(int)arg2 argIndex2:(int)arg3;
+ (void)raiseInvalidArgumentPairingsErrorForFunctionName:(id)arg1 hasInitialUnrelatedArgument:(bool)arg2;
+ (void)raiseInvalidArgumentRelationshipErrorForFunctionName:(id)arg1 argIndex1:(int)arg2 argIndex2:(int)arg3 argsAscending:(bool)arg4 equalityPermitted:(bool)arg5;
+ (void)raiseInvalidArgumentsErrorForFunctionName:(id)arg1 argumentIndex:(int)arg2;
+ (void)raiseInvalidArrayContentsError;
+ (void)raiseInvalidBaseCharacterErrorForCharacter:(unsigned short)arg1 base:(short)arg2;
+ (void)raiseInvalidComparisonError;
+ (void)raiseInvalidCurrencyComparisonError;
+ (void)raiseInvalidDateError;
+ (void)raiseInvalidDateManipulationError;
+ (void)raiseInvalidFrequencyErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseInvalidHeadingError;
+ (void)raiseInvalidHyperlinkError;
+ (void)raiseInvalidIndexForChooseError:(int)arg1;
+ (void)raiseInvalidIntersectionError:(struct vector<TSCEReferenceValue, std::__1::allocator<TSCEReferenceValue> > { struct TSCEReferenceValue {} *x1; struct TSCEReferenceValue {} *x2; struct __compressed_pair<TSCEReferenceValue *, std::__1::allocator<TSCEReferenceValue> > { struct TSCEReferenceValue {} *x_3_1_1; } x3; })arg1 hostTableID:(struct __CFUUID { }*)arg2 calcEngine:(id)arg3;
+ (void)raiseInvalidLatitudeLongitudeError;
+ (void)raiseInvalidMatchModeError;
+ (void)raiseInvalidProbabilityErrorForFunctionName:(id)arg1;
+ (void)raiseInvalidRangeUsageErrorForReference:(struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
+ (void)raiseInvalidSubtotalFunctionNumberError;
+ (void)raiseInvalidTailErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseInvalidTimeError;
+ (void)raiseInvalidTokenInFormulaError;
+ (void)raiseInvalidTypeErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseInvalidUnitStringError:(id)arg1;
+ (void)raiseLinestHighlyCorrelatedVariableError;
+ (void)raiseLinestMatrixUnderdeterminedError;
+ (void)raiseLocationHeadingFailureError;
+ (void)raiseLocationHeadingUnknownError;
+ (void)raiseLocationNetworkError;
+ (void)raiseLocationServicesNotEnabledError;
+ (void)raiseLocationUnknownError;
+ (void)raiseLocationUserDeniedError;
+ (void)raiseMatchNotFoundErrorForValue:(id)arg1 functionName:(id)arg2;
+ (void)raiseMismatchedCurrenciesErrorForFunctionName:(id)arg1;
+ (void)raiseMismatchedMaxUnitsError;
+ (void)raiseMismatchedUnitsErrorForFunctionName:(id)arg1;
+ (void)raiseMismatchedUnitsErrorForFunctionName:(id)arg1 argumentNumberString:(id)arg2;
+ (void)raiseMixedTypeManipulationErrorForFunctionName:(id)arg1;
+ (void)raiseMultipleDurationsErrorForFunctionName:(id)arg1;
+ (void)raiseNegativeReceivedAmountError;
+ (void)raiseNegativeVectorValueErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseNoModeError;
+ (void)raiseNoSuitableArgumentsFoundErrorForFunctionName:(id)arg1 requiredType:(int)arg2;
+ (void)raiseNonEmptyStringRequiredErrorForFunctionName:(id)arg1;
+ (void)raiseNonMetricUnitPrefixErrorForUnitString:(id)arg1;
+ (void)raiseNotAReferenceErrorForFunctionName:(id)arg1;
+ (void)raiseNotAVectorError;
+ (void)raiseNotEnoughInputsErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 required:(int)arg3;
+ (void)raiseNumberDoesNotConvergeErrorForFunctionName:(id)arg1;
+ (void)raiseNumberDoesNotConvergeWithEstimateErrorForFunctionName:(id)arg1;
+ (void)raiseNumberError;
+ (void)raiseNumberErrorForFunctionName:(id)arg1;
+ (void)raiseNumberMinusDateError;
+ (void)raiseNumberSmallerThanZeroError;
+ (void)raiseOnlyPositiveOrNegativeErrorForFunctionName:(id)arg1;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 lowerBound:(double)arg3 lowerBoundInclusive:(bool)arg4;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 lowerBound:(double)arg3 lowerBoundInclusive:(bool)arg4 upperBound:(double)arg5 upperBoundInclusive:(bool)arg6;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 upperBound:(double)arg3 upperBoundInclusive:(bool)arg4;
+ (void)raisePercentRankExcInputOutOfRangeError;
+ (void)raisePercentRankInputOutOfRangeError;
+ (void)raisePositionLargerThanArrayErrorForFunctionName:(id)arg1;
+ (void)raiseRangeDoesNotSumToOneForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseRangeSizeMismatchErrorForFunctionName:(id)arg1;
+ (void)raiseReferenceToEmptyCellErrorForFunctionName:(id)arg1 rangeReference:(struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg2;
+ (void)raiseSignsMustMatchErrorForFunctionName:(id)arg1;
+ (void)raiseStartNumberExceedsStringLengthErrorForFunctionName:(id)arg1;
+ (void)raiseStringDoesNotRepresentDateErrorForFunctionName:(id)arg1 string:(id)arg2;
+ (void)raiseStringDoesNotRepresentNumberErrorForFunctionName:(id)arg1 string:(id)arg2;
+ (void)raiseStringTooLongError;
+ (void)raiseSumMixedDurationsAndUnitlessWithoutADateErrorForFunctionName:(id)arg1;
+ (void)raiseTooFewDataPointsErrorForFunctionName:(id)arg1;
+ (void)raiseTypeExceptionForValue:(struct TSCEValue { unsigned long long x1[80]; int x2; })arg1 functionSpec:(id)arg2 argumentIndex:(int)arg3 locale:(id)arg4;
+ (void)raiseUnionInsideIntersectionError;
+ (void)raiseUnitsNotAllowedErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseUnkownFunctionErrorForString:(id)arg1;
+ (void)raiseUnsupportedR1C1StyleError;
+ (void)raiseValueError;
+ (void)raiseValueNotAvailableErrorForFunctionName:(id)arg1;
+ (void)raiseVectorValueNotNumberErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseWrongNumberOfArgumentsErrorForFunctionName:(id)arg1 provided:(int)arg2;
+ (void)raiseZeroToPowerOfZeroError;
+ (id)referenceToNonexistentTableError:(struct __CFUUID { }*)arg1;
+ (id)syntaxError;

- (id)bakedString;
- (bool)boolean;
- (bool)booleanForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext { bool x1; bool x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)dateForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext { bool x1; bool x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg3;
- (id)dateValue;
- (void)dealloc;
- (int)deepType;
- (id)displayStringWithCalculationEngine:(id)arg1 forTable:(struct __CFUUID { }*)arg2 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (double)doubleValue;
- (id)error;
- (id)errorDictionary;
- (bool)errorIsRangeUsageError;
- (struct TSCEVector { int (**x1)(); struct shared_ptr<TSCEAbstractVector> { struct TSCEAbstractVector {} *x_2_1_1; struct shared_count { struct sp_counted_base {} *x_2_2_1; } x_2_1_2; } x2; struct TSUFormat { int (**x_3_1_1)(); int x_3_1_2; bool x_3_1_3; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_4_2_1; struct { unsigned int x_2_3_1 : 8; } x_4_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_4_2_3; struct { unsigned int x_4_3_1 : 1; unsigned int x_4_3_2 : 1; id x_4_3_3; } x_4_2_4; struct { unsigned int x_5_3_1 : 1; int x_5_3_2; int x_5_3_3; int x_5_3_4; } x_4_2_5; struct { id x_6_3_1; id x_6_3_2; unsigned int x_6_3_3; unsigned char x_6_3_4; } x_4_2_6; struct { double x_7_3_1; double x_7_3_2; double x_7_3_3; int x_7_3_4; unsigned int x_7_3_5 : 2; unsigned int x_7_3_6 : 2; } x_4_2_7; struct { int x_8_3_1; unsigned int x_8_3_2; id x_8_3_3; } x_4_2_8; } x_3_1_4; } x3; })formattedVectorForFunction:(id)arg1 argumentIndex:(int)arg2 context:(struct TSCEEvaluationContext { }*)arg3 format:(const struct TSUFormat { int (**x1)(); int x2; bool x3; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_4_1_1; struct { unsigned int x_2_2_1 : 8; } x_4_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_4_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; } x_4_1_4; struct { unsigned int x_5_2_1 : 1; int x_5_2_2; int x_5_2_3; int x_5_2_4; } x_4_1_5; struct { id x_6_2_1; id x_6_2_2; unsigned int x_6_2_3; unsigned char x_6_2_4; } x_4_1_6; struct { double x_7_2_1; double x_7_2_2; double x_7_2_3; int x_7_2_4; unsigned int x_7_2_5 : 2; unsigned int x_7_2_6 : 2; } x_4_1_7; struct { int x_8_2_1; unsigned int x_8_2_2; id x_8_2_3; } x_4_1_8; } x4; }*)arg4;
- (id)initWithDictionary:(id)arg1;
- (bool)isAbortedError;
- (bool)isCircularReferenceError;
- (bool)isEqual:(id)arg1;
- (bool)isErrorReferenceError;
- (bool)isFromCalcEngine;
- (bool)isInvalidMergeReference;
- (bool)isInvalidReference;
- (bool)isNativelyEqual:(struct TSCEValue { unsigned long long x1[80]; int x2; })arg1;
- (bool)isOfType:(id)arg1;
- (bool)isSyntaxError;
- (int)nativeType;
- (struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSUFormat { int (**x_4_1_1)(); int x_4_1_2; bool x_4_1_3; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_4_2_1; struct { unsigned int x_2_3_1 : 8; } x_4_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_4_2_3; struct { unsigned int x_4_3_1 : 1; unsigned int x_4_3_2 : 1; id x_4_3_3; } x_4_2_4; struct { unsigned int x_5_3_1 : 1; int x_5_3_2; int x_5_3_3; int x_5_3_4; } x_4_2_5; struct { id x_6_3_1; id x_6_3_2; unsigned int x_6_3_3; unsigned char x_6_3_4; } x_4_2_6; struct { double x_7_3_1; double x_7_3_2; double x_7_3_3; int x_7_3_4; unsigned int x_7_3_5 : 2; unsigned int x_7_3_6 : 2; } x_4_2_7; struct { int x_8_3_1; unsigned int x_8_3_2; id x_8_3_3; } x_4_2_8; } x_4_1_4; } x4; bool x5; }*)number;
- (struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSUFormat { int (**x_4_1_1)(); int x_4_1_2; bool x_4_1_3; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_4_2_1; struct { unsigned int x_2_3_1 : 8; } x_4_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_4_2_3; struct { unsigned int x_4_3_1 : 1; unsigned int x_4_3_2 : 1; id x_4_3_3; } x_4_2_4; struct { unsigned int x_5_3_1 : 1; int x_5_3_2; int x_5_3_3; int x_5_3_4; } x_4_2_5; struct { id x_6_3_1; id x_6_3_2; unsigned int x_6_3_3; unsigned char x_6_3_4; } x_4_2_6; struct { double x_7_3_1; double x_7_3_2; double x_7_3_3; int x_7_3_4; unsigned int x_7_3_5 : 2; unsigned int x_7_3_6 : 2; } x_4_2_7; struct { int x_8_3_1; unsigned int x_8_3_2; id x_8_3_3; } x_4_2_8; } x_4_1_4; } x4; bool x5; }*)numberForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext { bool x1; bool x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg3;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 andDescend:(bool)arg3;
- (void)raiseException;
- (struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })rangeReference;
- (struct TSCEReferenceValue { int (**x1)(); struct TSCETableReferenceObject { struct ObjcSharedPtr<NSObject> { id x_1_2_1; } x_2_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_2_1_2; struct { unsigned short x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; } x_2_1_3; } x2; struct { unsigned short x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; } x3; struct shared_ptr<TSCEValue> { struct TSCEValue {} *x_4_1_1; struct shared_count { struct sp_counted_base {} *x_2_2_1; } x_4_1_2; } x4; bool x5; bool x6; unsigned char x7; bool x8; struct TSCEWarningReportingContext {} *x9; }*)referenceValue;
- (struct TSCEReferenceValue { int (**x1)(); struct TSCETableReferenceObject { struct ObjcSharedPtr<NSObject> { id x_1_2_1; } x_2_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_2_1_2; struct { unsigned short x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; } x_2_1_3; } x2; struct { unsigned short x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; } x3; struct shared_ptr<TSCEValue> { struct TSCEValue {} *x_4_1_1; struct shared_count { struct sp_counted_base {} *x_2_2_1; } x_4_1_2; } x4; bool x5; bool x6; unsigned char x7; bool x8; struct TSCEWarningReportingContext {} *x9; }*)referenceValueForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext { bool x1; bool x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg3;
- (void)setErrorDictionary:(id)arg1;
- (id)string;
- (id)stringForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext { bool x1; bool x2; struct ObjcSharedPtr<NSMutableSet> { id x_3_1_1; } x3; }*)arg3;
- (id)stringValue;
- (id)tokenString;
- (struct TSCEVector { int (**x1)(); struct shared_ptr<TSCEAbstractVector> { struct TSCEAbstractVector {} *x_2_1_1; struct shared_count { struct sp_counted_base {} *x_2_2_1; } x_2_1_2; } x2; struct TSUFormat { int (**x_3_1_1)(); int x_3_1_2; bool x_3_1_3; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_4_2_1; struct { unsigned int x_2_3_1 : 8; } x_4_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_4_2_3; struct { unsigned int x_4_3_1 : 1; unsigned int x_4_3_2 : 1; id x_4_3_3; } x_4_2_4; struct { unsigned int x_5_3_1 : 1; int x_5_3_2; int x_5_3_3; int x_5_3_4; } x_4_2_5; struct { id x_6_3_1; id x_6_3_2; unsigned int x_6_3_3; unsigned char x_6_3_4; } x_4_2_6; struct { double x_7_3_1; double x_7_3_2; double x_7_3_3; int x_7_3_4; unsigned int x_7_3_5 : 2; unsigned int x_7_3_6 : 2; } x_4_2_7; struct { int x_8_3_1; unsigned int x_8_3_2; id x_8_3_3; } x_4_2_8; } x_3_1_4; } x3; }*)vector;

@end