//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFPasteboardClientInstanceID : NSObject
{
    const struct __CFUUID *_uuid;
    NSObject<OS_xpc_object> *_conn;
}

@property(readonly) NSObject<OS_xpc_object> *connection; // @synthesize connection=_conn;
@property(readonly) const struct __CFUUID *uuid; // @synthesize uuid=_uuid;
- (id)description;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

@end

