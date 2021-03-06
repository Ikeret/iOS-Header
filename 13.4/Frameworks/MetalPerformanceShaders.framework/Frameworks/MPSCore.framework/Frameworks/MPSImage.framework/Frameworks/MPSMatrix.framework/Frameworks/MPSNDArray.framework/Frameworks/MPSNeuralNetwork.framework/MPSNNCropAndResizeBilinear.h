//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSNNCropAndResizeBilinear : MPSCNNKernel
{
    unsigned long long _resizeWidth;
    unsigned long long _resizeHeight;
    unsigned long long _numberOfRegions;
    struct MPSRegion *_regions;
    struct Region_params *_gpuRegions;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) const struct MPSRegion *regions; // @synthesize regions=_regions;
@property(readonly, nonatomic) unsigned long long numberOfRegions; // @synthesize numberOfRegions=_numberOfRegions;
@property(readonly, nonatomic) unsigned long long resizeHeight; // @synthesize resizeHeight=_resizeHeight;
@property(readonly, nonatomic) unsigned long long resizeWidth; // @synthesize resizeWidth=_resizeWidth;
- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 resizeWidth:(unsigned long long)arg2 resizeHeight:(unsigned long long)arg3 numberOfRegions:(unsigned long long)arg4 regions:(const struct MPSRegion *)arg5;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4;

@end

