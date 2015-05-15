/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLCompassDatabaseClientAdapter : CLNotifierServiceAdapter <CLCompassDatabaseClientProtocol>

@property (nonatomic) bool valid;

+ (void)becameFatallyBlocked:(id)arg1;
+ (id)getSilo;
+ (bool)isSupported;

- (struct CLCompassDatabaseClient { int (**x1)(); struct BasicMutex { int (**x_2_1_1)(); struct MutexInfo {} *x_2_1_2; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; id x4; id x5; struct map<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification> > > { struct __tree<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification> > > { struct __tree_node<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_6_1_1; } x6; struct map<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications> > > { struct __tree<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications> > > { struct __tree_node<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_7_1_1; } x7; int x8; bool x9; struct BasicMutex { int (**x_10_1_1)(); struct MutexInfo {} *x_10_1_2; } x10; int x11; }*)adaptee;
- (void)beginService;
- (void)doAsync:(id)arg1;
- (void)doAsync:(id)arg1 withReply:(id)arg2;
- (void)endService;
- (id)initInSilo:(id)arg1;
- (bool)syncgetDoSync:(id)arg1;

@end
