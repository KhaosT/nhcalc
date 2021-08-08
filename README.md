# nhcalc

Compute NeuralHash for a given image.

**Requires macOS Monterey**

Only tested with macOS Monterey beta 4, it may break in the future.

Behind the scene, the implementation invokes the API provided by the Vision framework to compute the NeuralHash for a given image.

The end result is a base64 encoded hash representing the given image.

Usage: `nhcalc path_to_image`
