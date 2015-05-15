/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface STStgInfo : NSObject {
    int m_accessMode;
    struct { 
        unsigned int m_data1; 
        unsigned short m_data2; 
        unsigned short m_data3; 
        unsigned char m_data4[8]; 
    } m_clsid;
    long long m_creationTime;
    long long m_modificationTime;
    NSString *m_pstrName;
    unsigned int m_size;
    int m_type;
    unsigned int m_userFlags;
}

- (void)dealloc;
- (int)getAccessMode;
- (struct { unsigned int x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; })getCLSID;
- (long long)getCreationTime;
- (long long)getModificationTime;
- (id)getName;
- (unsigned int)getSize;
- (int)getType;
- (unsigned int)getUserFlags;
- (id)init;
- (id)initWithStgInfo:(struct _StgInfo { int *x1; int x2; unsigned int x3; unsigned long long x4; long long x5; long long x6; int x7; struct _SSRW_GUID { unsigned int x_8_1_1; unsigned short x_8_1_2; unsigned short x_8_1_3; unsigned char x_8_1_4[8]; } x8; }*)arg1;
- (void)setAccessMode:(int)arg1;
- (void)setCLSID:(struct { unsigned int x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; })arg1;
- (void)setCreationTime:(long long)arg1;
- (void)setModificationTime:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setSize:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (void)setUserFlags:(unsigned int)arg1;

@end
