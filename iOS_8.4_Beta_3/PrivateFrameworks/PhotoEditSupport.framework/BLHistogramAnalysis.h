/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLHistogramAnalysis : NSObject {
    double _averageLinearBlue;
    double _averageLinearGreen;
    double _averageLinearRed;
    double _blackPoint;
    double _blackPointBlue;
    double _blackPointGreen;
    double _blackPointRed;
    double _whitePoint;
    double _whitePointBlue;
    double _whitePointGreen;
    double _whitePointRed;
}

@property(assign,readwrite) double averageLinearBlue;
@property(assign,readwrite) double averageLinearGreen;
@property(assign,readwrite) double averageLinearRed;
@property(assign,readwrite) double blackPoint;
@property(assign,readwrite) double blackPointBlue;
@property(assign,readwrite) double blackPointGreen;
@property(assign,readwrite) double blackPointRed;
@property(assign,readwrite) double whitePoint;
@property(assign,readwrite) double whitePointBlue;
@property(assign,readwrite) double whitePointGreen;
@property(assign,readwrite) double whitePointRed;

- (id)analysisDictionary;
- (double)averageLinearBlue;
- (double)averageLinearGreen;
- (double)averageLinearRed;
- (double)blackPoint;
- (double)blackPointBlue;
- (double)blackPointGreen;
- (double)blackPointRed;
- (void)dealloc;
- (id)description;
- (id)initWithAnalysisDictionary:(id)arg1;
- (id)initWithBLImage:(id)arg1;
- (void)setAverageLinearBlue:(double)arg1;
- (void)setAverageLinearGreen:(double)arg1;
- (void)setAverageLinearRed:(double)arg1;
- (void)setBlackPoint:(double)arg1;
- (void)setBlackPointBlue:(double)arg1;
- (void)setBlackPointGreen:(double)arg1;
- (void)setBlackPointRed:(double)arg1;
- (void)setWhitePoint:(double)arg1;
- (void)setWhitePointBlue:(double)arg1;
- (void)setWhitePointGreen:(double)arg1;
- (void)setWhitePointRed:(double)arg1;
- (double)whitePoint;
- (double)whitePointBlue;
- (double)whitePointGreen;
- (double)whitePointRed;

@end
