/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCell : NSObject <NSCopying> {
    TSULocale *mLocale;
    struct { 
        unsigned int mUnused : 8; 
        unsigned int mValueType : 8; 
        unsigned int mCellFlags : 16; 
        union { 
            double mDouble; 
            struct { 
                unsigned int mID; 
                NSString *mString; 
            } mString; 
            id mDate; 
            /* Warning: Unrecognized filer type: ')' using 'void*' */ void*NSDate; 
            unsigned int mCellStyleID; 
            TSTCellStyle *mCellStyle; 
            unsigned int mTextStyleID; 
            TSWPParagraphStyle *mTextStyle; 
            unsigned int mConditionalStyleSetID; 
            TSTConditionalStyleSet *mConditionalStyleSet; 
            unsigned char mConditionalAppliedRule; 
            unsigned int mFormulaID; 
            struct TSCEFormula {} *mFormula; 
            unsigned int mFormulaSyntaxErrorID; 
            TSWPStorage *mFormulaSyntaxError; 
            unsigned int mRichTextPayloadID; 
            TSTRichTextPayload *mRichTextPayload; 
            unsigned int mCommentStorageID; 
            TSDCommentStorage *mCommentStorage; 
            unsigned int mImportWarningSetID; 
            TSTImportWarningSet *mImportWarningSet; 
            struct { 
                unsigned int mExplicitFormatFlags : 16; 
                unsigned int mCurrentCellFormatID; 
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
                } mCurrentCellFormat; 
                unsigned int mNumberFormatID; 
                TSUFormatObject *mNumberFormatRef; 
                unsigned int mCurrencyFormatID; 
                TSUFormatObject *mCurrencyFormatRef; 
                unsigned int mDurationFormatID; 
                TSUFormatObject *mDurationFormatRef; 
                unsigned int mDateFormatID; 
                TSUFormatObject *mDateFormatRef; 
                unsigned int mControlFormatID; 
                TSUFormatObject *mControlFormatRef; 
                unsigned int mCustomFormatID; 
                TSUFormatObject *mCustomFormatRef; 
                unsigned int mBaseFormatID; 
                TSUFormatObject *mBaseFormatRef; 
                unsigned int mMultipleChoiceListFormatID; 
                TSUFormatObject *mMultipleChoiceListFormatRef; 
            } mCellFormats; 
            TSTCellBorder *mCellBorder; 
        } mValue; 
    } mPrivate;
}

@property(assign,readonly) TSULocale * locale;

- (id).cxx_construct;
- (void)applyFormulaResult:(const struct TSCEValue { unsigned long long x1[80]; int x2; }*)arg1;
- (void)applyFormulaResult:(const struct TSCEValue { unsigned long long x1[80]; int x2; }*)arg1 context:(id)arg2 hasWarnings:(bool)arg3 outWriteDidBeginOrEndWithTextCell:(bool*)arg4;
- (void)clear;
- (void)clearAllFormats;
- (void)clearStrokes;
- (void)clearValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formulaSyntaxErrorString;
- (bool)hasEqualValueToCell:(id)arg1;
- (void)inflateFromStorageRef:(struct TSTCellStorage { struct { unsigned char x_1_1_1; unsigned int x_1_1_2 : 8; unsigned int x_1_1_3 : 16; unsigned int x_1_1_4 : 16; unsigned int x_1_1_5 : 16; unsigned int x_1_1_6 : 16; unsigned int x_1_1_7 : 16; } x1; unsigned char x2[0]; }*)arg1 dataStore:(id)arg2 suppressingFormulaInflation:(bool)arg3;
- (void)inflateFromStorageRef:(struct TSTCellStorage { struct { unsigned char x_1_1_1; unsigned int x_1_1_2 : 8; unsigned int x_1_1_3 : 16; unsigned int x_1_1_4 : 16; unsigned int x_1_1_5 : 16; unsigned int x_1_1_6 : 16; unsigned int x_1_1_7 : 16; } x1; unsigned char x2[0]; }*)arg1 dataStore:(id)arg2 suppressingFormulaInflation:(bool)arg3 suppressingTransmutation:(bool)arg4;
- (id)init;
- (id)initWithCell:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)initWithStorageRef:(struct TSTCellStorage { struct { unsigned char x_1_1_1; unsigned int x_1_1_2 : 8; unsigned int x_1_1_3 : 16; unsigned int x_1_1_4 : 16; unsigned int x_1_1_5 : 16; unsigned int x_1_1_6 : 16; unsigned int x_1_1_7 : 16; } x1; unsigned char x2[0]; }*)arg1 dataStore:(id)arg2;
- (bool)isCellContentsEqualToCell:(id)arg1;
- (bool)isEmpty;
- (bool)isEmptyForDataStore;
- (id)locale;
- (void)setLocale:(id)arg1;
- (void)writeToStorageRef:(struct TSTCellStorage { struct { unsigned char x_1_1_1; unsigned int x_1_1_2 : 8; unsigned int x_1_1_3 : 16; unsigned int x_1_1_4 : 16; unsigned int x_1_1_5 : 16; unsigned int x_1_1_6 : 16; unsigned int x_1_1_7 : 16; } x1; unsigned char x2[0]; }*)arg1;

@end
