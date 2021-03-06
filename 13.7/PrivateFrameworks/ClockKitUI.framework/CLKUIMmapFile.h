//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLKUIMmapFile : NSObject
{
    int _descriptor;
    NSString *_path;
    unsigned long long _length;
    const void *_bytes;
}

+ (id)mmapFileWithPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) const void *bytes; // @synthesize bytes=_bytes;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) int descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)dealloc;
- (id)initWithPath:(id)arg1 descriptor:(int)arg2 length:(unsigned long long)arg3 bytes:(const void *)arg4;

@end

