//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFPGraphicsState;

__attribute__((visibility("hidden")))
@interface MFPGraphicsContainer : NSObject
{
    MFPGraphicsState *mParentGraphicsState;
    struct CGAffineTransform mContainerTransform;
}

- (void).cxx_destruct;
- (struct CGAffineTransform)containerTransform;
- (id)parentGraphicsState;
- (id)initWithParentGraphicsState:(id)arg1 containerTransform:(struct CGAffineTransform)arg2;

@end

