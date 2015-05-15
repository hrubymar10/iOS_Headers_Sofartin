/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLNotifierServiceAdapter : CLIntersiloService <CLNotifierServiceProtocol> {
    struct map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int> > > { 
        struct __tree<std::__1::__value_type<unsigned long, int>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, int> > > { 
            struct __tree_node<std::__1::__value_type<unsigned long, int>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, int>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    } _clients;
    struct CLNotifierBase { int (**x1)(); } *_notifier;
}

@property(assign,readonly) struct CLNotifierBase { int (**x1)(); }* notifier;
@property(assign,readwrite) bool valid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)forget:(/* Warning: Unrecognized filer type: 'R' using 'void*' */ void*)arg1;
- (id)initInSilo:(id)arg1;
- (void)invalidate;
- (struct CLNotifierBase { int (**x1)(); }*)notifier;
- (int)notifierClientNumForCoparty:(id)arg1;
- (void)register:(/* Warning: Unrecognized filer type: 'R' using 'void*' */ void*)arg1 forNotification:(id)arg2 registrationInfo:(int)arg3;
- (void)setAdaptedNotifier:(struct CLNotifierBase { int (**x1)(); }*)arg1;
- (void)unregister:(/* Warning: Unrecognized filer type: 'R' using 'void*' */ void*)arg1 forNotification:(id)arg2;

@end