//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AFOneArgumentSafetyBlock : NSObject
{
    struct atomic_flag _hasInvoked;
    CDUnknownBlockType _block;
    id _defaultValue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)invokeWithValue:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 defaultValue:(id)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

