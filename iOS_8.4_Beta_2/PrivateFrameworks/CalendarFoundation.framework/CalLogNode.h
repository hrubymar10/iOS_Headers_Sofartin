/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogNode : NSObject {
    NSMutableArray *_accumulator;
    unsigned long long _accumulatorBufferSize;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CalLogFilter *_filter;
    NSMutableArray *_subnodes;
    <CalLogWriter> *_writer;
}

@property(assign,retain) NSMutableArray * accumulator;
@property(assign,readwrite) unsigned long long accumulatorBufferSize;
@property(assign,retain) CalLogFilter * filter;
@property(assign,retain) NSMutableArray * subnodes;
@property(assign,retain) <CalLogWriter> * writer;

- (void).cxx_destruct;
- (id)accumulator;
- (unsigned long long)accumulatorBufferSize;
- (void)addSubnode:(id)arg1;
- (id)allSubnodes;
- (void)clearAccumulator;
- (id)filter;
- (bool)flush;
- (void)flushAccumulator;
- (id)init;
- (int)minimumLevelOfNodeTree;
- (void)processEnvelope:(id)arg1;
- (void)removeSubnode:(id)arg1;
- (void)setAccumulator:(id)arg1;
- (void)setAccumulatorBufferSize:(unsigned long long)arg1;
- (void)setFilter:(id)arg1;
- (void)setSubnodes:(id)arg1;
- (void)setWriter:(id)arg1;
- (id)subnodes;
- (id)writer;

@end
