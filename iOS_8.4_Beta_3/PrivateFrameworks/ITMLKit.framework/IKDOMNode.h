/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMNode : IKJSObject <IKJSDOMEventTarget, IKJSDOMNode> {
    long long _ITMLID;
    NSHashTable *_domObservers;
    NSMutableDictionary *_eventListenersMap;
    JSManagedValue *_managedChildNodeList;
    JSManagedValue *_managedOwnerDocument;
    JSManagedValue *_managedParent;
    JSManagedValue *_managedSelf;
    struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; } *_nodePtr;
}

@property(assign,readwrite) long long ITMLID;
@property(assign,retain) IKDOMNodeList * childNodes;
@property(assign,retain) NSHashTable * domObservers;
@property(assign,retain) NSMutableDictionary * eventListenersMap;
@property(assign,retain) IKDOMNode * firstChild;
@property(assign,retain) IKDOMNodeData * jsNodeData;
@property(assign,retain) IKDOMNode * lastChild;
@property(assign,retain) JSManagedValue * managedChildNodeList;
@property(assign,retain) JSManagedValue * managedOwnerDocument;
@property(assign,retain) JSManagedValue * managedParent;
@property(assign,retain) JSManagedValue * managedSelf;
@property(assign,readonly) IKDOMNode * nextSibling;
@property(assign,retain) NSString * nodeName;
@property(assign,readonly) long long nodeType;
@property(assign,retain) NSString * nodeValue;
@property(assign,readonly) IKDOMDocument * ownerDocument;
@property(assign,readonly) IKDOMNode * parentNode;
@property(assign,readonly) IKDOMNode * previousSibling;
@property(assign,retain) NSString * textContent;

+ (id)_eventListenerMapKeyForType:(id)arg1 useCapture:(bool)arg2;
+ (void)handleNodeParentDidChange:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
+ (void)handleNodeWillRelease:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
+ (id)nodeWithAppContext:(id)arg1 nodePtr:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2;

- (void).cxx_destruct;
- (long long)ITMLID;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)_appendNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)_insertNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 refNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2 operation:(unsigned long long)arg3;
- (void)_linkManagedObjects;
- (void)_notifyUpdatesToDOMObservers;
- (bool)_searchEventListener:(id)arg1 key:(id)arg2 destroy:(bool)arg3;
- (void)_unlinkManagedObjects;
- (bool)_validateDOMOperation:(unsigned long long)arg1 newNode:(id)arg2 refNode:(id)arg3;
- (void)addDOMObserver:(id)arg1;
- (void)addEventListener:(id)arg1 :(id)arg2 :(bool)arg3;
- (id)appendChild:(id)arg1;
- (unsigned long long)childElementCount;
- (id)childNodes;
- (id)childNodesAsArray;
- (id)children;
- (id)cloneNode:(bool)arg1;
- (void)dealloc;
- (id)description;
- (bool)dispatchEvent:(id)arg1;
- (id)domObservers;
- (void)enumerateEventListernersForType:(id)arg1 xmlAttribute:(id)arg2 phase:(long long)arg3 usingBlock:(id)arg4;
- (id)eventListenersMap;
- (id)firstChild;
- (id)firstElementChild;
- (id)getFeature:(id)arg1 :(id)arg2;
- (bool)hasChildNodes;
- (id)initWithAppContext:(id)arg1 xmlNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2;
- (id)insertBefore:(id)arg1 :(id)arg2;
- (bool)isEqualNode:(id)arg1;
- (bool)isSameNode:(id)arg1;
- (id)jsNodeData;
- (id)lastChild;
- (id)lastElementChild;
- (id)managedChildNodeList;
- (id)managedOwnerDocument;
- (id)managedParent;
- (id)managedSelf;
- (id)nextSibling;
- (id)nodeName;
- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)nodePtr;
- (long long)nodeType;
- (id)nodeValue;
- (id)nodesForXPath:(id)arg1 error:(id*)arg2;
- (void)notifyChildrenUpdatedWithUpdatedChildNodes:(id)arg1;
- (void)notifyUpdated;
- (id)ownerDocument;
- (id)parentNode;
- (id)performDOMOperation:(unsigned long long)arg1 newNode:(id)arg2 refNode:(id)arg3;
- (id)previousSibling;
- (id)removeChild:(id)arg1;
- (void)removeDOMObserver:(id)arg1;
- (void)removeEventListener:(id)arg1 :(id)arg2 :(bool)arg3;
- (id)replaceChild:(id)arg1 :(id)arg2;
- (void)setDomObservers:(id)arg1;
- (void)setEventListenersMap:(id)arg1;
- (void)setITMLID:(long long)arg1;
- (void)setManagedChildNodeList:(id)arg1;
- (void)setManagedOwnerDocument:(id)arg1;
- (void)setManagedParent:(id)arg1;
- (void)setNodeValue:(id)arg1;
- (void)setTextContent:(id)arg1;
- (id)textContent;
- (id)writeToStringWithError:(id*)arg1;

@end
