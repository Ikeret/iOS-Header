//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MGFileWatcher : NSObject
{
    NSString *_path;
    unsigned long long _inode;
    struct timespec _mtime;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_src;
    NSObject<OS_dispatch_source> *_parentSrc;
    CDUnknownBlockType _block;
}

- (void)cancel;
- (id)initWithPath:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)updateWatcher;
- (void)dealloc;

@end

