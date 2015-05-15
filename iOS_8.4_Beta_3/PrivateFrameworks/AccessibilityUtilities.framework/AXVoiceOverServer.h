/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXVoiceOverServer : AXServer

+ (id)server;

- (bool)_connectIfNecessary;
- (id)_serviceName;
- (id)currentFocusedElement;
- (id)currentRotorName;
- (id)lastScreenChange;
- (id)lastSoundsPlayed;
- (id)lastSpokenPhrases;
- (bool)triggerCommand:(int)arg1;

@end