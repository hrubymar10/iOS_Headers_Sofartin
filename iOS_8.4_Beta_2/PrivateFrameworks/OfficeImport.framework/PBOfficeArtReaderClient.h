/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBOfficeArtReaderClient : NSObject <OABReaderClient>

+ (void)addRecolorSpec:(const struct PptRecolorSpec { int (**x1)(); struct EshColor { struct Data { int x_1_2_1; union Value { struct RGB { unsigned char x_1_4_1; unsigned char x_1_4_2; unsigned char x_1_4_3; } x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; struct AdjustedColor { unsigned char x_4_4_1; unsigned char x_4_4_2; unsigned int x_4_4_3 : 4; unsigned int x_4_4_4 : 1; unsigned int x_4_4_5 : 1; unsigned int x_4_4_6 : 1; } x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; struct EshColor { struct Data { int x_1_2_1; union Value { struct RGB { unsigned char x_1_4_1; unsigned char x_1_4_2; unsigned char x_1_4_3; } x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; struct AdjustedColor { unsigned char x_4_4_1; unsigned char x_4_4_2; unsigned int x_4_4_3 : 4; unsigned int x_4_4_4 : 1; unsigned int x_4_4_5 : 1; unsigned int x_4_4_6 : 1; } x_2_3_4; } x_1_2_2; } x_3_1_1; } x3; bool x4; bool x5; }*)arg1 toDictionary:(id)arg2;
+ (int)directionFromFlyDirection:(int)arg1;
+ (bool)escherIsFullySupported;
+ (id)newBuildFromBuildType:(int)arg1;
+ (id)newTargetFromDrawable:(id)arg1 clientData:(id)arg2 buildType:(int)arg3;
+ (int)presetIdFromFlyMethod:(int)arg1 isEntrance:(bool)arg2;
+ (void)readClientAnchorFromContainer:(id)arg1 toDrawable:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+ (void)readHyperlinkFromShapeContainerHolder:(id)arg1 toDrawable:(id)arg2 state:(id)arg3;
+ (bool)readOleFromClientDataHolder:(id)arg1 toGraphic:(id)arg2 tgtClientData:(id)arg3 state:(id)arg4;
+ (bool)readPlaceholderInfo:(id)arg1 clientData:(id)arg2 toGraphic:(id)arg3 presentationState:(id)arg4;
+ (bool)readRecolorInfoFromClientDataHolder:(id)arg1 toClientData:(id)arg2;
+ (bool)tablesAreAllowed;

@end
