//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKLabelCollectionNode.h>

@class NSArray;

@interface NTKHourLabelCollectionNode : NTKLabelCollectionNode
{
    NSArray *_valid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *valid; // @synthesize valid=_valid;
- (void)createSubNodes;
- (id)createParentNodesForHours:(id)arg1 withPositions:(struct CGPoint *)arg2 validHours:(id)arg3;

@end

